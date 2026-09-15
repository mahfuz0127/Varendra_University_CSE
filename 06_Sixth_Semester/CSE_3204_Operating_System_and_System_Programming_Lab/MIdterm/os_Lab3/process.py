import os
print("this is a parent before creating child.")

pid = os.fork()
print("hello world!")
