import rclpy
from rclpy.node import Node
import math
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist


class CarMoveSquare(Node):

    def __init__(self):
        super().__init__('car_move_square')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        timer_period = 3.0
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.side = 0
        self.turning = False

    def timer_callback(self):
        vel_cmd = Twist()


            

        if self.side % 2 != 0:

            vel_cmd.linear.x = 0.0
            vel_cmd.angular.z = math.pi / 6

        elif self.side % 2 == 0:
 
            vel_cmd.linear.x = 1.0
            vel_cmd.angular.z = 0.0

        self.publisher_.publish(vel_cmd)
        
        self.side += 1



    def destroy(self):
        self.timer.cancel()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)

    car_move_square = CarMoveSquare()

    rclpy.spin(car_move_square)

    car_move_square.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
