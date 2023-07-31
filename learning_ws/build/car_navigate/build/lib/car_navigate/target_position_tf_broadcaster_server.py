#!/usr/bin/env python3FBroa
# -*- coding: utf-8 -*-

import rclpy                                                                 
from rclpy.node import Node                                                 
from geometry_msgs.msg import TransformStamped                               # 坐标变换消息
import tf_transformations                                                    # TF坐标变换库
# from tf2_ros import TransformBroadcaster           # TF坐标变换广播器
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
from navigate_interfaces.srv import GivePosition

class positionTFBroadcaster(Node):
    def __init__(self, name):
        super().__init__(name)   
        
        self.tf_broadcaster = StaticTransformBroadcaster(self)                  # 创建一个TF广播器对象
        
        self.srv = self.create_service(GivePosition, 'give_position', self.target_position_broadcaster)
    
    def  target_position_broadcaster(self,request,response):
        transform = TransformStamped()                            # 创建一个坐标变换的消息对象
        transform.header.stamp = self.get_clock().now().to_msg()  # 设置坐标变换消息的时间戳
        transform.header.frame_id = 'world'                       # 设置一个坐标变换的源坐标系
        transform.child_frame_id  = 'target_position'             # 设置一个坐标变换的目标坐标系
        transform.transform.translation.x = request.x             # 设置坐标变换中的X、Y、Z向的平移
        transform.transform.translation.y = request.y                   
        transform.transform.translation.z = 0.0
        quat = tf_transformations.quaternion_from_euler(0.0, 0.0, 0.0)          # 将欧拉角转换为四元数（roll, pitch, yaw）
        transform.transform.rotation.x = quat[0]                  # 设置坐标变换中的X、Y、Z向的旋转（四元数）
        transform.transform.rotation.y = quat[1]
        transform.transform.rotation.z = quat[2]
        transform.transform.rotation.w = quat[3]

        self.tf_broadcaster.sendTransform(transform)              # 广播静态坐标变换，广播后两个坐标系的位置关系保持不变
        
        response.finish = True
        return response
        
            
            
def main(args=None):
    rclpy.init(args=args)                                
    node = positionTFBroadcaster("target_position_tf_broadcaster_server")  
    rclpy.spin(node)                                     
    node.destroy_node()                                  
    rclpy.shutdown()
