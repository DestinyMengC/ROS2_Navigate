import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from math import pi

class CarMoveSquare(Node):

    def __init__(self):
        super().__init__('car_move_square')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.subscription = self.create_subscription(
            Odometry,
            'odom',
            self.odom_callback,
            10
        )
        self.subscription  # prevent unused variable warning
        self.i = 0
        self.side = 0
        self.turning = False
        self.current_yaw = 0.0
        self.target_yaw = 0.0

    def odom_callback(self, msg):
        # Get current yaw from the quaternion
        orientation = msg.pose.pose.orientation
        roll, pitch, yaw = self.quaternion_to_euler(
            orientation.x,
            orientation.y,
            orientation.z,
            orientation.w
        )
        self.current_yaw = yaw

    def quaternion_to_euler(self, x, y, z, w):
        import math
        t0 = +2.0 * (w * x + y * z)
        t1 = +1.0 - 2.0 * (x * x + y * y)
        roll_x = math.atan2(t0, t1)

        t2 = +2.0 * (w * y - z * x)
        t2 = +1.0 if t2 > +1.0 else t2
        t2 = -1.0 if t2 < -1.0 else t2
        pitch_y = math.asin(t2)

        t3 = +2.0 * (w * z + x * y)
        t4 = +1.0 - 2.0 * (y * y + z * z)
        yaw_z = math.atan2(t3, t4)

        return roll_x, pitch_y, yaw_z

    def timer_callback(self):
        vel_cmd = Twist()

        if self.side == 0 or self.side == 2:
            # Move forward for the first and third sides
            vel_cmd.linear.x = 1.0
            vel_cmd.angular.z = 0.0

        elif self.side == 1 or self.side == 3:
            # Rotate for the second and fourth sides
            vel_cmd.linear.x = 0.0
            vel_cmd.angular.z = 0.5  # Adjust angular velocity as per your requirement

            # Check if the target yaw (desired rotation) is reached
            if abs(self.current_yaw - self.target_yaw) >= pi/2:
                vel_cmd.angular.z = 0.0  # Stop rotation
                self.side += 1
                self.target_yaw += pi/2

        self.publisher_.publish(vel_cmd)

        if self.side > 3:
            self.timer.cancel()

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

"""
dyj@dyj-virtual-machine:~$ ros2 topic list
/clock
/cmd_vel
/imu
/joint_states
/odom
/parameter_events
/performance_metrics
/robot_description
/rosout
/scan
/tf
/tf_static
dyj@dyj-virtual-machine:~$ ros2 topic info /odom 
Type: nav_msgs/msg/Odometry
Publisher count: 1
Subscription count: 0
dyj@dyj-virtual-machine:~$ ros2 interface show ^C
dyj@dyj-virtual-machine:~$ ros2 interface show nav_msgs/msg/Odometry
# This represents an estimate of a position and velocity in free space.
# The pose in this message should be specified in the coordinate frame given by header.frame_id
# The twist in this message should be specified in the coordinate frame given by the child_frame_id

# Includes the frame id of the pose parent.
std_msgs/Header header
	builtin_interfaces/Time stamp
		int32 sec
		uint32 nanosec
	string frame_id

# Frame id the pose points to. The twist is in this coordinate frame.
string child_frame_id

# Estimated pose that is typically relative to a fixed world frame.
geometry_msgs/PoseWithCovariance pose
	Pose pose
		Point position
			float64 x
			float64 y
			float64 z
		Quaternion orientation
			float64 x 0
			float64 y 0
			float64 z 0
			float64 w 1
	float64[36] covariance

# Estimated linear and angular velocity relative to child_frame_id.
geometry_msgs/TwistWithCovariance twist
	Twist twist
		Vector3  linear
			float64 x
			float64 y
			float64 z
		Vector3  angular
			float64 x
			float64 y
			float64 z
	float64[36] covariance

"""