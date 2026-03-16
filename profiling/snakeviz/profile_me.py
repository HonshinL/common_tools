import time

def fast_io_task():
    # 模拟快速的IO或等待
    time.sleep(0.05)

def medium_calc_task():
    # 模拟中等规模计算
    total = sum(i for i in range(10**5))
    return total

def heavy_bottleneck_task():
    # 模拟核心瓶颈：巨大的计算量
    # 这就是未来我们需要改成 C++ 的部分
    result = 0
    for i in range(5 * 10**6):
        result += i**0.5
    return result

def main():
    print("任务开始...")
    for _ in range(20):
        fast_io_task()
    
    for _ in range(5):
        medium_calc_task()
        
    heavy_bottleneck_task()
    print("任务完成！")

if __name__ == "__main__":
    main()