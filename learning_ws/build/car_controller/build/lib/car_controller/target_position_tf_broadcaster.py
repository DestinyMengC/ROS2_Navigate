#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy                                                                 
from rclpy.node import Node                                                 
from geometry_msgs.msg import TransformStamped                               # 坐标变换消息
import tf_transformations                                                    # TF坐标变换库
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster  # TF静态坐标系广播器类

class StaticTFBroadcaster(Node):
    def __init__(self, name):
        super().__init__(name)                                                  
        self.tf_broadcaster = StaticTransformBroadcaster(self)                  # 创建一个TF广播器对象

        static_transformStamped = TransformStamped()                            # 创建一个坐标变换的消息对象
        static_transformStamped.header.stamp = self.get_clock().now().to_msg()  # 设置坐标变换消息的时间戳
        static_transformStamped.header.frame_id = 'world'                       # 设置一个坐标变换的源坐标系
        static_transformStamped.child_frame_id  = 'target_position'             # 设置一个坐标变换的目标坐标系
        static_transformStamped.transform.translation.x = 5.0                   # 设置坐标变换中的X、Y、Z向的平移
        static_transformStamped.transform.translation.y = 6.0                    
        static_transformStamped.transform.translation.z = 0.0
        quat = tf_transformations.quaternion_from_euler(0.0, 0.0, 0.0)          # 将欧拉角转换为四元数（roll, pitch, yaw）
        static_transformStamped.transform.rotation.x = quat[0]                  # 设置坐标变换中的X、Y、Z向的旋转（四元数）
        static_transformStamped.transform.rotation.y = quat[1]
        static_transformStamped.transform.rotation.z = quat[2]
        static_transformStamped.transform.rotation.w = quat[3]

        self.tf_broadcaster.sendTransform(static_transformStamped)              # 广播静态坐标变换，广播后两个坐标系的位置关系保持不变

def main(args=None):
    rclpy.init(args=args)                                
    node = StaticTFBroadcaster("static_tf_broadcaster")  
    rclpy.spin(node)                                     
    node.destroy_node()                                  
    rclpy.shutdown()
