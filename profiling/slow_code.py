import time

def fast_function():
    # 模拟快速操作
    time.sleep(0.01)

# @profile
def slow_function():
    # 模拟计算密集型瓶颈：比如一个低效的平方和计算
    result = 0
    for i in range(10**6):
        result += i**2
    return result

def main():
    for _ in range(10):
        fast_function()
    slow_function()  # 这里的调用次数虽少，但耗时极长

if __name__ == "__main__":
    main()