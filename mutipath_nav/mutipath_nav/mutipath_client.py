import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
import sys
# from navigate_interfaces.action import MutiPath
from nav_interfaces.action import Nav


class carFollowingClient(Node):

    def __init__(self):
        super().__init__('car_following_client')
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

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.finish))
        

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f"Receive feedback({feedback.x},{feedback.y})")
 



def main(args=None):
    rclpy.init(args=args)

    action_client = carFollowingClient()

    # x_array = [1.0, 2.0]  # Replace with your desired x array
    # y_array = [4.0, 4.0]  # Replace with your desired y array

    # x_array = [2.0, 5.0]  # Replace with your desired x array
    # y_array = [4.0, 6.0]  # Replace with your desired y array
    
    input_x = input("请输入途径点和目标点的x坐标，以空格分隔：")
    input_y = input("请输入途径点和目标点的y坐标，以空格分隔：")
    input_v = input("请输入途径点和目标点的速度约束，以空格分隔：")

    x_array = [float(num) for num in input_x.split()]
    y_array = [float(num) for num in input_y.split()]
    v_array = [int(num) for num in input_v.split()]


    action_client.send_goal(x_array, y_array, v_array)

    rclpy.spin(action_client)
    
    rclpy.shutdown()


if __name__ == '__main__':
    main()