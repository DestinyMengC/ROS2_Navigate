from setuptools import setup
import os
from glob import glob

package_name = 'car_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dyj',
    maintainer_email='dyj@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'car_move_square_try_1 = car_controller.car_move_square_try_1:main',
            'car_move_straight = car_controller.car_move_straight:main',
            'car_move_circle = car_controller.car_move_circle:main',
            'car_navigate_tf_broadcaster = car_controller.car_navigate_tf_broadcaster:main',
            'target_position_tf_broadcaster = car_controller.target_position_tf_broadcaster:main',
            'car_navigate_one_position = car_controller.car_navigate_one_position:main',
        ],
    },
)
