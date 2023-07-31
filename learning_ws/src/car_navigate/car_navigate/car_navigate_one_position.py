#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import math
import rclpy                                              
from rclpy.node import Node                               
import tf_transformations                                 # TF坐标变换库
from tf2_ros import TransformException                    # TF左边变换的异常类
from tf2_ros.buffer import Buffer                         # 存储坐标变换信息的缓冲类
from tf2_ros.transform_listener import TransformListener  # 监听坐标变换的监听器类
from geometry_msgs.msg import Twist                       # ROS2 速度控制消息

                

class carFollowing(Node):

    def __init__(self, name):
        super().__init__(name)                                      

        self.declare_parameter('source_frame', 'car')               # 创建一个源坐标系名的参数
        self.source_frame = self.get_parameter(                     # 优先使用外部设置的参数值，否则用默认值
            'source_frame').get_parameter_value().string_value

        self.tf_buffer = Buffer()                                   # 创建保存坐标变换信息的缓冲区
        self.tf_listener = TransformListener(self.tf_buffer, self)  # 创建坐标变换的监听器


        self.publisher = self.create_publisher(Twist, '/cmd_vel', 1) # 创建跟随运动小车的速度话题

        self.timer = self.create_timer(1.0, self.on_timer)         # 创建一个固定周期的定时器，控制跟随小车的运动

    def on_timer(self):
        from_frame_rel = 'target_position'                        # 源坐标系
        to_frame_rel   = self.source_frame                        # 目标坐标系


        try:
            now = rclpy.time.Time()                        # 获取ROS系统的当前时间
            trans = self.tf_buffer.lookup_transform(       # 监听当前时刻源坐标系到目标坐标系的坐标变换
                to_frame_rel,
                from_frame_rel,
                now)
        except TransformException as ex:                   # 如果坐标变换获取失败，进入异常报告
            self.get_logger().info(
                f'Could not transform {to_frame_rel} to {from_frame_rel}: {ex}')
            return

        msg = Twist()                                      # 创建速度控制消息
        scale_rotation_rate = 0.5                          # 根据小车角度，计算角速度
        msg.angular.z = scale_rotation_rate * math.atan2(
            trans.transform.translation.y,
            trans.transform.translation.x)

        scale_forward_speed = 0.2                          # 根据小车距离，计算线速度
        msg.linear.x = scale_forward_speed * math.sqrt(
            trans.transform.translation.x ** 2 +
            trans.transform.translation.y ** 2)

        self.publisher.publish(msg)                        # 发布速度指令，小车跟随运动


def main(args=None):
    rclpy.init(args=args)                       # ROS2 Python接口初始化
    node = carFollowing("car_following")        # 创建ROS2节点对象并进行初始化
    rclpy.spin(node)                            # 循环等待ROS2退出
    node.destroy_node()                         # 销毁节点对象
    rclpy.shutdown()                            # 关闭ROS2 Python接口
