from setuptools import find_packages, setup

package_name = 'mutipath_nav'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
        ],
    },
)
