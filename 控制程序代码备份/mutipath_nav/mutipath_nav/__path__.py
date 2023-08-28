import rclpy
from rclpy.node import Node
from nav_msgs.msg import Path
from std_msgs.msg import Header
from geometry_msgs.msg import PoseStamped, Point, Quaternion

class PathPublisher(Node):
    def __init__(self):
        super().__init__('path_publisher')
        self.path_pub = self.create_publisher(Path, 'path_topic', 10)
        self.timer = self.create_timer(1.0, self.publish_path)
        self.path_sequence = [
            Point(x=1.0, y=0.0, z=0.0),
            Point(x=2.0, y=1.0, z=0.0),
            Point(x=3.0, y=2.0, z=0.0),
        ]
        self.path_frame_id = 'odom'

    def publish_path(self):
        path_msg = Path()
        path_msg.header = Header()
        path_msg.header.stamp = self.get_clock().now().to_msg()
        path_msg.header.frame_id = self.path_frame_id

        for point in self.path_sequence:
            pose_stamped = PoseStamped()
            pose_stamped.header = path_msg.header
            pose_stamped.pose.position = point
            pose_stamped.pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)
            path_msg.poses.append(pose_stamped)

        self.path_pub.publish(path_msg)
        # self.get_logger().info('Published a path with %d waypoints', len(self.path_sequence))

def main(args=None):
    rclpy.init(args=args)
    path_publisher = PathPublisher()
    rclpy.spin(path_publisher)
    path_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
