from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([

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
            executable='car_navigate_one_position',
            name='listener',     
        ), 
        # Node(
        #     package='car_navigate',
        #     executable='car_navigate_client',
        #     name='client',     
        # ), 
    ])
