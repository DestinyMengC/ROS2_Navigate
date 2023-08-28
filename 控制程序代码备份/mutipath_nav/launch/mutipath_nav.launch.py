import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # 获取world文件的完整路径
    world_file_path = os.path.expanduser('~/MCU_nav/src/world/simu_site.world')

    return LaunchDescription([
        # 启动Gazebo仿真器
        ExecuteProcess(
            cmd=[
                'gazebo',
                '--verbose',  # 可选：启用详细输出
                world_file_path  # 传递world文件路径作为参数
            ],
            output='screen'
        ),
    ])
