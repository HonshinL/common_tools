import ezdxf
 
# 创建新文档（指定R2010版本）
doc = ezdxf.new('R2010')  # 支持版本：'R12', 'R2000', 'R2004', 'R2007', 'R2010', 'R2013', 'R2018'
 
# 获取模型空间
msp = doc.modelspace()
 
# 添加半径为10的圆（圆心坐标(0, 0)）
msp.add_circle(center=(0, 0), radius=10)
 
# 添加矩形（通过闭合多段线实现）
msp.add_polyline2d(points=[(0, 0), (10, 0), (10, 10), (0, 10), (0, 0)])
 
# 保存文件
doc.saveas('example.dxf')