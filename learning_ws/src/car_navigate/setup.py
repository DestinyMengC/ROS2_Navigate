from setuptools import setup
import os
from glob import glob

package_name = 'car_navigate'

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
            'target_position_tf_broadcaster_server    = car_navigate.target_position_tf_broadcaster_server:main',
            'car_navigate_tf_broadcaster = car_navigate.car_navigate_tf_broadcaster:main',
            'car_navigate_one_position = car_navigate.car_navigate_one_position:main',
            'give_position_client = car_navigate.give_position_client:main',
            'car_navigate_server = car_navigate.car_navigate_server:main',
            'car_navigate_client = car_navigate.car_navigate_client:main',
        ],
    },
)
