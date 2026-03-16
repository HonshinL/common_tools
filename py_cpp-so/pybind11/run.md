
### 编译 example_pybind11.cpp
```
g++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) example.cpp -o example$(python3-config --extension-suffix)
```


### 编译 example_ctypes.cpp
```
g++ -O3 -Wall -shared -std=c++11 -fPIC example_ctypes.cpp -o example_ctypes.so
```