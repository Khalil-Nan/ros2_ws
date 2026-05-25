from setuptools import find_packages
from setuptools import setup

setup(
    name='graphnav_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('graphnav_msgs', 'graphnav_msgs.*')),
)
