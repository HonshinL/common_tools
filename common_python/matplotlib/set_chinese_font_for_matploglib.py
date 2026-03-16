import matplotlib
import shutil

# 找配置文件
config_path = matplotlib.matplotlib_fname()

# 备份原文件
shutil.copy(config_path, config_path + '.backup')

# 读取内容
with open(config_path, 'r') as f:
    lines = f.readlines()

# 修改关键行
for i, line in enumerate(lines):
    if line.startswith('#font.sans-serif:'):
        lines[i] = 'font.sans-serif: WenQuanYi Micro Hei, DejaVu Sans, ...\n'
    if line.startswith('#axes.unicode_minus:'):
        lines[i] = 'axes.unicode_minus: False\n'

# 写回文件
with open(config_path, 'w') as f:
    f.writelines(lines)

print(f"配置已更新！原文件备份为 {config_path}.backup")