import ctypes

lib = ctypes.CDLL('./example_ctypes.so')
# lib.add.argtypes = [ctypes.c_int, ctypes.c_int]
result = lib.add(10, 20)
print(f"Result: {result}")