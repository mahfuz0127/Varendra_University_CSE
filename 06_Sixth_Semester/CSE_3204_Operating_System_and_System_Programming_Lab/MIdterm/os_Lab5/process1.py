import os 
pid = os.fork()

if pid == 0:
    print("Child is running.")
    os.execl("/bin/ls","ls","-l")
else:
    print("This is parent")
    os.waitpid(pid,0)


