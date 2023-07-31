import rospy
from std_msgs.msg import String
import signal
import math
import tf

# 定义关闭程序的回调函数
def shutdown(sig, frame):
    cmdVelPub.publish(Twist())  # 发布空的Twist消息停止机器人
    rospy.loginfo("odom_out_and_back.py 结束!")
    rospy.signal_shutdown("Ctrl+C pressed.")

rospy.init_node("go_and_back")  # 初始化ROS节点

rate = 20  # 更新机器人运动的频率
count = 0  # 循环两次
rospy.init_node('go_and_back', anonymous=True)

topic = "/cmd_vel"
cmdVelPub = rospy.Publisher(topic, Twist, queue_size=1)  # 创建用于控制机器人速度的Publisher

loopRate = rospy.Rate(rate)  # 创建ROS Rate对象以控制循环的频率

signal.signal(signal.SIGINT, shutdown)  # 注册程序关闭的回调函数
rospy.loginfo("odom_out_and_back.py 开始...")

linear_speed = 0.2  # 前进的线速度为0.2米/秒
goal_distance = 1.0  # 行进的距离为1.0米

angular_speed = 0.5  # 旋转的角速度为0.5弧度/秒
goal_angle = math.pi  # 旋转的角度为π弧度（180度）
angular_tolerance = 2.5 * math.pi / 180  # 角度公差（弧度）

listener = tf.TransformListener()
transform = tf.StampedTransform()

odom_frame = "/odom"
base_frame = ""

try:
    listener.waitForTransform(odom_frame, "/base_footprint", rospy.Time(), rospy.Duration(2.0))
    base_frame = "/base_footprint"
    rospy.loginfo("base_frame = /base_footprint")
except tf.Exception as e:
    try:
        listener.waitForTransform(odom_frame, "/base_link", rospy.Time(), rospy.Duration(2.0))
        base_frame = "/base_link"
        rospy.loginfo("base_frame = /base_link")
    except tf.Exception as e:
        rospy.loginfo("无法找到 /odom 和 /base_link 或 /base_footprint 之间的变换关系")
        cmdVelPub.publish(Twist())
        rospy.shutdown()

for i in range(2):
    rospy.loginfo("直行...!")
    speed = Twist()
    speed.linear.x = linear_speed  # 设置线速度，正值表示前进，负值表示后退

    listener.lookupTransform(odom_frame, base_frame, rospy.Time(0), transform)
    x_start = transform.getOrigin().x()
    y_start = transform.getOrigin().y()

    distance = 0  # 距离记录器
    while distance < goal_distance and not rospy.is_shutdown():
        cmdVelPub.publish(speed)  # 发布控制信号给机器人
        loopRate.sleep()

        listener.lookupTransform(odom_frame, base_frame, rospy.Time(0), transform)
        x = transform.getOrigin().x()
        y = transform.getOrigin().y()

        distance = math.sqrt(pow((x - x_start), 2) + pow((y - y_start), 2))

    cmdVelPub.publish(Twist())  # 在旋转之前停止机器人
    rospy.sleep(1)  # 休眠1秒

    rospy.loginfo("旋转中...!")
    speed.linear.x = 0
    speed.angular.z = angular_speed  # 设置角速度，正值表示左转，负值表示右转

    last_angle = abs(tf.transformations.euler_from_quaternion(transform.getRotation())[2])
    turn_angle = 0

    while abs(turn_angle + angular_tolerance) < math.pi and not rospy.is_shutdown():
        cmdVelPub.publish(speed)  # 发布控制信号给机器人
        loopRate.sleep()

        listener.lookupTransform(odom_frame, base_frame, rospy.Time(0), transform)
        rotation = abs(tf.transformations.euler_from_quaternion(transform.getRotation())[2])

        delta_angle = abs(rotation - last_angle)
        turn_angle += delta_angle

        last_angle = rotation

    speed.angular.z = 0
    cmdVelPub.publish(Twist())  # 在下一段行进之前停止机器人
    rospy.sleep(1)  # 休眠1秒

cmdVelPub.publish(Twist())
rospy.sleep(1)  # 休眠1秒
rospy.loginfo("odom_out_and_back.py 结束!")
rospy.shutdown()
