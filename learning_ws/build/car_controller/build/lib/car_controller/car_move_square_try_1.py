import rclpy
from rclpy.node import Node
import math

from geometry_msgs.msg import Twist

linear_speed = 0.4  # 前进的线速度为0.2米/秒
goal_distance = 1.0  # 行进的距离为5.0米
linear_duration = goal_distance / linear_speed  # 行进所需的时间

angular_speed = 0.4  # 旋转的角速度为1.0弧度/秒
goal_angle = math.pi / 2 # 旋转的角度为π弧度（90度）
angular_duration = goal_angle / angular_speed  # 旋转所需的时间

# rate = 50  # 更新机器人运动的频率


class CarMoveSquare(Node):

    def __init__(self):
        super().__init__('car_move_square')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        timer_period = angular_duration
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.side = 0
        self.turning = False

    def timer_callback(self):
        vel_cmd = Twist() 

        if self.side % 2 != 0:
            vel_cmd.linear.x = 0.0
            vel_cmd.angular.z = angular_speed
            
            # ticks = int(angular_duration * rate)          
            # for i in range(ticks):               
            #     self.publisher_.publish(vel_cmd)
            
            # self.publisher_.publish(Twist())

        elif self.side % 2 == 0:
            vel_cmd.linear.x = linear_speed
            vel_cmd.angular.z = 0.0
            
            # ticks = int(linear_duration * rate)
            # for i in range(ticks):                       
            #     self.publisher_.publish(vel_cmd)
            
            # self.publisher_.publish(Twist())
            

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
