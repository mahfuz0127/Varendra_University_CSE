import os
pid = os.fork()

if pid == 0:
    print("This is a child process.")
    print("child process PID:",os.getpid(),pid)
elif pid > 0:
    print("This is a Parent process. ")
    print("Parent Process PID:",os.getpid(),pid)
else: 
    print("PID faild.")
