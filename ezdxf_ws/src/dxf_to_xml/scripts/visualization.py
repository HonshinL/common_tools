import ezdxf
from ezdxf.addons.drawing import RenderContext, Frontend
from ezdxf.addons.drawing.matplotlib import MatplotlibBackend
import matplotlib.pyplot as plt

# 读取 DXF 文件
doc = ezdxf.readfile("shapes.dxf")
msp = doc.modelspace()

# 创建渲染上下文和后端
ctx = RenderContext(doc)
fig = plt.figure()
ax = fig.add_axes([0, 0, 1, 1])
backend = MatplotlibBackend(ax)

# 前端渲染
Frontend(ctx, backend).draw_layout(msp, finalize=True)

plt.show()