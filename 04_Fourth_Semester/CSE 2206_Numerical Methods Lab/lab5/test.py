#random float number generator 12-20 sec
import random
import time
start = time.time()
for i in range(27):
    num = random.uniform(12, 20)
    print(f"{num:.3f}")