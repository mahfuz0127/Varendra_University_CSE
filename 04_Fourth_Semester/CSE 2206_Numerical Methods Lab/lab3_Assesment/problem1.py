n = int(input("Enter a number to take sumation: "))

sum = 0
for i in range(1,n+1):
    sum += i

print("the sumation of the first", n, "numbers is:", sum)