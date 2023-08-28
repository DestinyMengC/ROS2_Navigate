from twisted.internet import reactor, protocol
import threading
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from nav_interfaces.action import Nav
import json
import time

event = threading.Event()

class RosNode(Node):

    def __init__(self,name):
        super().__init__(name)
        self._action_client = ActionClient(self, Nav, 'car_navigate_action')        

    def send_goal(self, x , y , v):
        goal_msg = Nav.Goal()
        goal_msg.x = x
        goal_msg.y = y
        goal_msg.v = v

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)



    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
        
        # spin_thread = threading.Thread(target=self.run_rclpy_spin)
        # spin_thread.start()

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.finish))
        event.set()
        self.get_logger().info('Event set')
        

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f"Receive feedback({feedback.x},{feedback.y})")

    def run(self):
        rclpy.spin(self)
        
 

class TCPClient(protocol.Protocol):
    def __init__(self, action_client):
        self.action_client = action_client
        callback_thread = threading.Thread(name="callback thread",target=self.callback)
        callback_thread.start()
        print("Start!")
        

    def callback(self):
        while True:
            print("callback!")
            event.wait()
            message = b"Task finished!"
            self.transport.write(message)
            event.clear()
            time.sleep(1.0)

    def connectionMade(self):
        message = b"Try to get navigation information!"
        print(f"Sending message to server: {message}")
        self.transport.write(message)
        

    def dataReceived(self, data):
        received_data = data.decode("utf-8")  # Decode the received data
        
        try:
            parsed_data = json.loads(received_data)  # Parse the JSON data
            if isinstance(parsed_data, list) and len(parsed_data) >= 3:
                # Assuming parsed_data is a list with at least 3 elements
                goal_1 = parsed_data[0]
                goal_2 = parsed_data[1]
                goal_3 = parsed_data[2]
                
                if self.action_client:
                    self.action_client.send_goal(goal_1, goal_2, goal_3)
            else:
                print("Invalid data format or insufficient data in the received JSON.")
        except json.JSONDecodeError:
            print("Error decoding the received JSON data.")
        

    

class TCPClientFactory(protocol.ClientFactory):
 
    def __init__(self,action_client):
        self.action_client = action_client
        self.retry_delay = 1  # 延迟1秒

    def clientConnectionFailed(self, connector, reason):
        print("Connection failed:", reason)
        print("Retrying in", self.retry_delay, "seconds...")
        reactor.callLater(self.retry_delay, connector.connect)  # 尝试重新连接

    def clientConnectionLost(self, connector, reason):
        print("Connection lost:", reason)
        print("Reconnecting in", self.retry_delay, "seconds...")
        reactor.callLater(self.retry_delay, connector.connect)  # 尝试重新连接

    def buildProtocol(self, addr):
        return TCPClient(self.action_client)





def main(args=None):

    rclpy.init(args=args)  # ROS2 Python接口初始化    

    action_client = RosNode("ros_client")


    # ros_server_thread = threading.Thread(target=ros_server_spin, args=(executor,))
    ros_client_thread = threading.Thread(name="ros client thread",target=action_client.run)
    ros_client_thread.setDaemon(True)

    # ros_server_thread.start()
    ros_client_thread.start()

    factory = TCPClientFactory(action_client)
    reactor.connectTCP("localhost", 12345, factory)
    # action_client.factory = factory
    reactor.run()
    
    # rclpy.shutdown()  # 关闭ROS2 Python接口


    

if __name__ == "__main__":
    main()