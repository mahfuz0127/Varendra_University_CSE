import os
import sys

print("Enter 3 integer numbers: ")
number = list(map(int, input().split()))

# 1. First Child: Memory and Swap usage
pid1 = os.fork()
if pid1 == 0:
    print("\n--- Child 1 (PID: %d): Free Memory Monitoring ---" % os.getpid())
    os.execlp("free", "free", "-h")
    sys.exit(0)

# 2. Second Child: Disk space usage
pid2 = os.fork()
if pid2 == 0:
    print("\n--- Child 2 (PID: %d): Disk Space Monitoring ---" % os.getpid())
    os.execlp("df", "df", "-h")
    sys.exit(0)

# 3. Third Child: System uptime and load average
pid3 = os.fork()
if pid3 == 0:
    print("\n--- Child 3 (PID: %d): System Uptime & Load ---" % os.getpid())
    os.execlp("uptime", "uptime")
    sys.exit(0)

# Parent Process
print(f"\nParent (PID: {os.getpid()}) running...")
print(f"Parent Largest number is: {max(number)}")

# Wait for all 3 children to finish
for p in [pid1, pid2, pid3]:
    os.waitpid(p, 0)

print("\nAll monitoring processes finished.")
