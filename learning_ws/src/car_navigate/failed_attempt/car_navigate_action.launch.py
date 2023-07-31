from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument,ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import os


def generate_launch_description():
    
    # 设置TURTLEBOT3_MODEL环境变量
    env_vars = {'TURTLEBOT3_MODEL': 'burger'}

    # 创建一个ExecuteProcess节点来运行Gazebo的launch文件
    gazebo_launch_cmd = os.path.join(
        os.path.dirname(__file__),
        'turtlebot3_gazebo',
        'launch',
        'empty_world.launch.py'
    )
    gazebo_launch_cmd = 'ros2 launch ' + gazebo_launch_cmd
    
    return LaunchDescription([

        # 声明TURTLEBOT3_MODEL环境变量
        DeclareLaunchArgument(
            'TURTLEBOT3_MODEL',
            default_value='burger',
            description='TurtleBot3 model type: burger, waffle, or waffle_pi'
        ),

        # 运行Gazebo的launch文件
        ExecuteProcess(
            cmd=['ros2', 'launch', gazebo_launch_cmd],
            env=env_vars
        ),

        Node(
            package='car_navigate',
            executable='target_position_tf_broadcaster_server',
            name='broadcaster1',
            
        ),

        Node(
            package='car_navigate',
            executable='car_navigate_tf_broadcaster',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'car'}
            ]
        ),
        Node(
            package='car_navigate',
            executable='car_navigate_one_position_server',
            name='listener',     
        ), 
    ])