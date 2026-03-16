from setuptools import find_packages, setup

package_name = 'dxf_to_xml_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/dxf_to_xml_pkg']),
        ('share/dxf_to_xml_pkg', ['package.xml']),
        ('share/dxf_to_xml_pkg/output', []), # 安装时创建 output 文件夹 ],
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hongxin',
    maintainer_email='lihongxin@cplaser.com.cn',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'dxf_to_xml_server = dxf_to_xml_pkg.dxf_to_xml_server:main',
            'dxf_to_xml_client = dxf_to_xml_pkg.dxf_to_xml_client:main',
        ],
    },
)