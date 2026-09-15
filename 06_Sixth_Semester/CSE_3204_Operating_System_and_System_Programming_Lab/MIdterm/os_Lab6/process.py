import os

print("Enter 3 integer numbers: ")
number = list(map(int, input().split()))

pid = os.fork()

if pid<0:
    print("fork() failed.")
elif pid == 0:
    print("child process running...")
    os.execl("/bin/sh","sh","-c","touch clild_process_file && chmod 764 clild_process_file && ls -l")
elif pid > 0:
    print("parent process rinning...")
    print(f"parent Largest number is: {max(number)}")
    os.waitpid(pid,0)
   
    



