builtin_interfaces/Time timestamp # 时间戳
float32[] laser # 激光信号
float32[] infrared # 红外信号
float32[] visible # 可见光信号
float32[] vibration # 测振数据
float32[] distance # 测距数据
uint8[] label # 焊缝质量，取值0或1；0：不合格，1：合格；
float32[] confidence # 推理结果置信度，取值[0,1]；
