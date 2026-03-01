from setuptools import find_packages
from setuptools import setup

setup(
    name='master_ros2_interface',
    version='0.0.0',
    packages=find_packages(
        include=('master_ros2_interface', 'master_ros2_interface.*')),
)
