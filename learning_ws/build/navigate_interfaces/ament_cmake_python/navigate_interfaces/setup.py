from setuptools import find_packages
from setuptools import setup

setup(
    name='navigate_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('navigate_interfaces', 'navigate_interfaces.*')),
)
