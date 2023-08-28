#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import time
import math
import rclpy
from rclpy.node import Node
import tf_transformations                                 # TF坐标变换库
from tf2_ros import TransformException                    # TF左边变换的异常类
from tf2_ros.buffer import Buffer                         # 存储坐标变换信息的缓冲类
from tf2_ros.transform_listener import TransformListener  # 监听坐标变换的监听器类
from geometry_msgs.msg import Twist                       # ROS2 速度控制消息
from rclpy.action import ActionServer
# from navigate_interfaces.action import MutiPath
from nav_interfaces.action import Nav
# from nav_msgs.msg import Odometry
import math
# import asyncio
from nav_msgs.msg import Path
from std_msgs.msg import Header
from geometry_msgs.msg import PoseStamped, Point, Quaternion

MIN_ANGULAR = 0.1
MAX_ANGULAR = 0.4
MIN_LINEAR = 0.3
NORMAL_LINEAR = 0.6


class PathMsg(Node):
    def __init__(self,name):
        super().__init__(name)
        self.path_pub = self.create_publisher(Path, 'path_topic', 10)
        self.timer = self.create_timer(1.0, self.publish_path)
        
        self.path_frame_id = 'odom'

    def publish_path(self,x,y):
        path_msg = Path()
        path_msg.header = Header()
        path_msg.header.stamp = self.get_clock().now().to_msg()
        path_msg.header.frame_id = self.path_frame_id
        
        self.path_sequence = [Point(x=xx, y=yy, z=0.0) for xx, yy in zip(x, y)]

        for point in self.path_sequence:
            pose_stamped = PoseStamped()
            pose_stamped.header = path_msg.header
            pose_stamped.pose.position = point
            pose_stamped.pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)
            path_msg.poses.append(pose_stamped)

        self.path_pub.publish(path_msg)

    def run(self):
        rclpy.spin(self)

class carFollowingServer(Node):

    def __init__(self, name):
        super().__init__(name)
        self.node_car_following = None

        self.source_frame = 'odom'
        self.target_frame = 'base_footprint'

        self._action_server = ActionServer(
            self,
            Nav,
            'car_navigate_action',
            self.execute_callback)
#--------------------------------------------------------
        self.path_pub = self.create_publisher(Path, 'path_topic', 10)
        # self.timer = self.create_timer(1.0, self.publish_path(self.target_position_x,self.target_position_y))
        
        self.path_frame_id = 'odom'

    def publish_path(self,x,y):
            path_msg = Path()
            path_msg.header = Header()
            path_msg.header.stamp = self.get_clock().now().to_msg()
            path_msg.header.frame_id = self.path_frame_id

            self.path_sequence = [Point(x=xx, y=yy, z=0.0) for xx, yy in zip(x, y)]

            for point in self.path_sequence:
                pose_stamped = PoseStamped()
                pose_stamped.header = path_msg.header
                pose_stamped.pose.position = point
                pose_stamped.pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)
                path_msg.poses.append(pose_stamped)

            self.path_pub.publish(path_msg)
#--------------------------------------------------------



    def update_transform(self, trans):
        self.trans = trans

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        result = Nav.Result()
        result.finish = False
        self.feedback_msg = Nav.Feedback()
        msg = Twist()                                      # 创建速度控制消息

        self.publisher = self.create_publisher(
            Twist, '/cmd_vel', 1)  # 创建跟随运动小车的速度话题

        self.goal_handle = goal_handle
        i = 0

        self.target_position_x = goal_handle.request.x          # 获取客户端发送的目标点的数据
        self.target_position_y = goal_handle.request.y
        car_state = goal_handle.request.v


        self.get_logger().info(
            f"target_position  {self.target_position_x} , {self.target_position_y}")

        self.timer = self.create_timer(1.0, lambda: self.publish_path(self.target_position_x, self.target_position_y))


        time.sleep(1.0)


        while True:
            # time.sleep(0.1)

            self.car_position_x = self.trans.transform.translation.x     # 小车的x坐标位置
            self.car_position_y = self.trans.transform.translation.y     # 小车的y坐标位置

            # self.get_logger().info(
            #     f"Position {self.car_position_x} , {self.car_position_y}")

            self.relative_position_x = self.target_position_x[i] - \
                self.car_position_x  # 小车与目标点的x坐标的相对位置
            self.relative_position_y = self.target_position_y[i] - \
                self.car_position_y  # 小车与目标点的y坐标的相对位置

            self.feedback_msg.x = self.relative_position_x     # 反馈信息为小车与目标点的相对位置距离
            self.feedback_msg.y = self.relative_position_y



            relative_euler = math.atan2(  # 小车与目标点的相对角度
                self.relative_position_y,
                self.relative_position_x) 

            
            if msg.linear.x == 0.0:
                msg.angular.z =  relative_euler/abs(relative_euler) * MAX_ANGULAR   # 转角处旋转速度
            else:
                msg.angular.z = relative_euler/abs(relative_euler) * MIN_ANGULAR    # 闭环控制速度


            quat = self.trans.transform.rotation               # 获取姿态信息（四元数）
            euler = tf_transformations.euler_from_quaternion(
                [quat.x, quat.y, quat.z, quat.w])
 


            if relative_euler > 0:                      # 根据姿态信息确定旋转方向
                if euler[2] > (relative_euler - math.pi) and euler[2] < relative_euler:
                    msg.angular.z = msg.angular.z
                else:
                    msg.angular.z = -msg.angular.z
            else:
                if euler[2] > relative_euler and euler[2] < (math.pi + relative_euler):
                    msg.angular.z = msg.angular.z
                else:
                    msg.angular.z = -msg.angular.z





            if abs(relative_euler - euler[2]) < math.pi/156 or abs(relative_euler - euler[2]) > 2 * math.pi - math.pi/72:            # 根据小车的角度控制小车前进/转向
                if msg.linear.x == 0.0:

                    msg.angular.z = 0.0
                    self.publisher.publish(msg)
                    self.get_logger().info(
                        "--------------------")
                    time.sleep(0.1)

                if car_state[i] == 0:                                   # 小车需要停止运动的点
                    
                    if car_state[i-1] == 2:                             # 根据小车上一段线路的速度，计算本阶段的初速度，以保证连贯性
                        scale_forward_speed = NORMAL_LINEAR                          
                    elif car_state[i-1] == 1:
                        scale_forward_speed = MIN_LINEAR
                    else:
                        scale_forward_speed = NORMAL_LINEAR
                    
                    # scale_forward_speed = NORMAL_LINEAR                          # 根据小车距离，计算线速度
                    msg.linear.x = scale_forward_speed * math.sqrt(
                        self.relative_position_x ** 2 +
                        self.relative_position_y ** 2)
                    
                    if abs(self.feedback_msg.x) <= 0.01 and abs(self.feedback_msg.y) <= 0.01:
                        msg.angular.z = 0.0
                        msg.linear.x = 0.0
                        self.publisher.publish(msg)                    # 让小车停止运动
                        if i < len(self.target_position_x)-1:
                            i = i + 1

                        else:
                            result.finish = True
                            goal_handle.succeed()
                            return result

                elif car_state[i] == 1:                                 # 小车需要慢速运动的路段
                    if car_state[i-1] == 2:
                        if msg.linear.x > MIN_LINEAR:
                            msg.linear.x = NORMAL_LINEAR * math.sqrt(
                            self.relative_position_x ** 2 +
                            self.relative_position_y ** 2)
                        else:
                            msg.linear.x = MIN_LINEAR

                    else:
                        msg.linear.x = MIN_LINEAR
                    
                    if abs(self.feedback_msg.x) <= 0.05 and abs(self.feedback_msg.y) <= 0.05:
                        i = i + 1
                else:                                                   # 小车需要原速运动的路段
                    msg.linear.x = NORMAL_LINEAR
                    
                    if abs(self.feedback_msg.x) <= 0.1 and abs(self.feedback_msg.y) <= 0.1:
                        i = i + 1
            else:
                msg.linear.x = 0.0  
                # pass     







            self.get_logger().info(
                f"angular,linear {msg.angular.z} , {msg.linear.x}")

            self.publisher.publish(msg)                        # 发布速度指令，小车运动




            # self.get_logger().info(
            #     f"Surplus distance {self.feedback_msg.x} , {self.feedback_msg.y}")
            goal_handle.publish_feedback(self.feedback_msg)
            # self.get_logger().info(
            #     f"self.target_position {self.target_position_x} , {self.target_position_y}")
            time.sleep(0.01)


class MutiTreadedExcutor(Node):

    def __init__(self, name):
        super().__init__(name)

        self.car_following_node = None  # 保存carFollowingServer节点的实例对象

        self.tf_buffer = Buffer()                                   # 创建保存坐标变换信息的缓冲区
        self.tf_listener = TransformListener(
            self.tf_buffer, self)  # 创建坐标变换的监听器

        # 创建一个源坐标系名的参数
        self.declare_parameter('source_frame', 'base_footprint')
        self.source_frame = self.get_parameter(                     # 优先使用外部设置的参数值，否则用默认值
            'source_frame').get_parameter_value().string_value

        self.declare_parameter('target_frame', 'odom')    # 创建一个目标坐标系名的参数
        self.target_frame = self.get_parameter(                     # 优先使用外部设置的参数值，否则用默认值
            'target_frame').get_parameter_value().string_value

        self.timer = self.create_timer(
            0.01, self.on_timer)          # 创建一个固定周期的定时器，处理坐标信息

    def on_timer(self):
        try:
            now = rclpy.time.Time()                                 # 获取ROS系统的当前时间
            trans = self.tf_buffer.lookup_transform(           # 监听当前时刻源坐标系到目标坐标系的坐标变换
                self.target_frame,
                self.source_frame,
                now)
            # 调用carFollowingServer节点的update_transform方法
            self.car_following_node.update_transform(trans)
        except TransformException as ex:                            # 如果坐标变换获取失败，进入异常报告
            # self.get_logger().info(
            #     f'Could not transform {self.target_frame} to {self.source_frame}: {ex}')
            return

        # pos  = trans.transform.translation                          # 获取位置信息
        # quat = trans.transform.rotation                             # 获取姿态信息（四元数）
        # euler = tf_transformations.euler_from_quaternion([quat.x, quat.y, quat.z, quat.w])
        # self.get_logger().info('Get %s --> %s transform: [%f, %f, %f] [%f, %f, %f]'
        #   % (self.source_frame, self.target_frame, pos.x, pos.y, pos.z, euler[0], euler[1], euler[2]))


def main(args=None):
    rclpy.init(args=args)  # ROS2 Python接口初始化

    node_car_following = carFollowingServer(
        "car_following_server")  # 创建ROS2节点对象并进行初始化
    node_executor = MutiTreadedExcutor("executor")

    node_executor.car_following_node = node_car_following  # 传递carFollowingServer节点的实例对象

    executor = rclpy.executors.MultiThreadedExecutor()  # 创建多线程执行器
    executor.add_node(node_car_following)
    executor.add_node(node_executor)

    try:
        executor.spin()
    finally:
        node_car_following.destroy_node()
        node_executor.destroy_node()
        rclpy.shutdown()  # 关闭ROS2 Python接口
