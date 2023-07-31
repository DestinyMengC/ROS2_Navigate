import rospy
from geometry_msgs.msg import Twist
import signal
import math

# 定义关闭程序的回调函数
def shutdown(sig, frame):
    cmdVelPub.publish(Twist())  # 发布空的Twist消息停止机器人
    rospy.loginfo("timed_out_and_back.py 结束!")
    rospy.signal_shutdown("Ctrl+C pressed.")

rospy.init_node("go_and_back")  # 初始化ROS节点

topic = "/cmd_vel"
cmdVelPub = rospy.Publisher(topic, Twist, queue_size=1)  # 创建用于控制机器人速度的Publisher

rate = 50  # 更新机器人运动的频率
loopRate = rospy.Rate(rate)  # 创建ROS Rate对象以控制循环的频率

signal.signal(signal.SIGINT, shutdown)  # 注册程序关闭的回调函数
rospy.loginfo("timed_out_and_back.py 开始...")

linear_speed = 0.2  # 前进的线速度为0.2米/秒
goal_distance = 1.0  # 行进的距离为1.0米
linear_duration = goal_distance / linear_speed  # 行进所需的时间

angular_speed = 1.0  # 旋转的角速度为1.0弧度/秒
goal_angle = math.pi  # 旋转的角度为π弧度（180度）
angular_duration = goal_angle / angular_speed  # 旋转所需的时间

count = 0  # 记录行进的次数
ticks = 0  # 循环计数器
speed = Twist()  # 控制信号的Twist消息对象

while not rospy.is_shutdown():
    speed.linear.x = linear_speed  # 设置线速度，正值表示前进，负值表示后退

    # 行进一段时间以行进1米
    ticks = int(linear_duration * rate)
    for i in range(ticks):
        cmdVelPub.publish(speed)  # 发布控制信号给机器人
        loopRate.sleep()

    cmdVelPub.publish(Twist())  # 在旋转之前停止机器人
    rospy.loginfo("旋转中...")

    speed.linear.x = 0
    speed.angular.z = angular_speed  # 设置角速度，正值表示左转，负值表示右转

    # 旋转一段时间以旋转180度
    ticks = int(angular_duration * rate)
    for i in range(ticks):
        cmdVelPub.publish(speed)  # 发布控制信号给机器人
        loopRate.sleep()

    speed.angular.z = 0
    cmdVelPub.publish(Twist())  # 在下一段行进之前停止机器人

    count += 1
    if count == 2:
        count = 0
        cmdVelPub.publish(Twist())
        rospy.loginfo("timed_out_and_back.py 结束!")
        rospy.signal_shutdown("任务完成.")
    else:
        rospy.loginfo("返回中...")

