#detecting prime number
def prime(x):
    if x <= 1:
        return False
    elif x==2:
        return True
    elif x%2==0:
        return False
    
    temp = 3
    while x/2:
        if x%temp==0:
            return False
        else:
            return True
        temp += 2
            

n = int(input("Enter a number to check if it is prime: "))

if prime(n):
    print(f"{n} is a prime number.")
else:
    print(f"{n} is not a prime number.")


        