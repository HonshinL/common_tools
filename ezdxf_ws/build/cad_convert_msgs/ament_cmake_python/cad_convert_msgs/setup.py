from setuptools import find_packages
from setuptools import setup

setup(
    name='cad_convert_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('cad_convert_msgs', 'cad_convert_msgs.*')),
)
