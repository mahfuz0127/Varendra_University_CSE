#printing only the even numbers from 1 to n
n = int(input("Enter a number to take sumation: "))

for i in range(1, n + 1):
    if i % 2 == 0:
        print(i, end=' ')