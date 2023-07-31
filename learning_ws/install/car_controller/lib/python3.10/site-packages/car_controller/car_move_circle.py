import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class CarMoveCircle(Node):

    def __init__(self):
        super().__init__('car_move_circle')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        timer_period = 0.5 
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        vel_cmd = Twist()
        vel_cmd.linear.x=1.0
        vel_cmd.angular.z=1.0
        
        self.publisher_.publish(vel_cmd)



def main(args=None):
    rclpy.init(args=args)

    car_move_circle = CarMoveCircle()

    rclpy.spin(car_move_circle)


    car_move_circle.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()