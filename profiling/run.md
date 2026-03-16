
```
python3 -m cProfile -s tottime slow_code.py
```

```
         25 function calls in 0.140 seconds

   Ordered by: internal time

   ncalls  tottime  percall  cumtime  percall filename:lineno(function)
       10    0.101    0.010    0.101    0.010 {built-in method time.sleep}
        1    0.039    0.039    0.039    0.039 slow_code.py:7(slow_function)
        1    0.000    0.000    0.140    0.140 slow_code.py:14(main)
        1    0.000    0.000    0.000    0.000 {method 'disable' of '_lsprof.Profiler' objects}
       10    0.000    0.000    0.101    0.010 slow_code.py:3(fast_function)
        1    0.000    0.000    0.140    0.140 {built-in method builtins.exec}
        1    0.000    0.000    0.140    0.140 slow_code.py:1(<module>)
```


```
kernprof -l -v slow_code.py
```

```
Wrote profile results to 'slow_code.py.lprof'
Timer unit: 1e-06 s

Total time: 0.214236 s
File: slow_code.py
Function: slow_function at line 7

Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
     7                                           @profile
     8                                           def slow_function():
     9                                               # 模拟计算密集型瓶颈：比如一个低效的平方和计算
    10         1          1.1      1.1      0.0      result = 0
    11   1000001      94543.4      0.1     44.1      for i in range(10**6):
    12   1000000     119690.1      0.1     55.9          result += i**2
    13         1          1.2      1.2      0.0      return result
```



### Visualization

```
pip install snakeviz
python -m cProfile -o program.prof slow_code.py
snakeviz program.prof
```

```
pip install viztracer
viztracer slow_code.py
vizviewer result.json
```