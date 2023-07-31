import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist


class CarMoveStraight(Node):

    def __init__(self):
        super().__init__('car_move_straight')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)


    def timer_callback(self):
        vel_cmd = Twist()
        vel_cmd.linear.x=1.0

        
        self.publisher_.publish(vel_cmd)



def main(args=None):
    rclpy.init(args=args)

    car_move_straight = CarMoveStraight()

    rclpy.spin(car_move_straight)


    car_move_straight.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()