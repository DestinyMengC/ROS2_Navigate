from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([

        Node(
            package='car_controller',
            executable='target_position_tf_broadcaster',
            name='broadcaster1',
            
        ),

        Node(
            package='car_controller',
            executable='car_navigate_tf_broadcaster',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'car'}
            ]
        ),
        Node(
            package='car_controller',
            executable='car_navigate_one_position',
            name='listener',
            
        ), 
    ])
