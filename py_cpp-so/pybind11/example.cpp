#include <pybind11/pybind11.h>

// 1. 你的高性能 C++ 函数
int fast_add(int i, int j) {
    return i + j;
}

// 2. 绑定宏：创建一个名为 example 的 Python 模块
PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // 模块说明
    m.def("add", &fast_add, "A function that adds two numbers"); // 暴露函数
}