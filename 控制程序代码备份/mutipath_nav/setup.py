from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'mutipath_nav'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
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
            'mutipath_server = mutipath_nav.mutipath_server:main',
            'mutipath_client = mutipath_nav.mutipath_client:main',
            'TCP_server = mutipath_nav.TCP_server:main',
            'TCP_client = mutipath_nav.TCP_client:main',
            '__path__ = mutipath_nav.__path__:main'
        ],
    },
)
