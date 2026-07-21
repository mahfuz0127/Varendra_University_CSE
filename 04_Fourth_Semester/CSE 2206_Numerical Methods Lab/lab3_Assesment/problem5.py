a = int(input("Enter first number: "))
op = str(input("Enter a operator to evaluate (+,-,*,/): "))
b = int(input("Enter second number: "))

if op=='+':
    print(a,'+',b,'=',(a+b))
elif op=='-':
    print(a,'-',b,'=',(a-b))
elif op=='-':
    print(a,'*',b,'=',(a*b))
elif op=='/':
    print(a,'/',b,'=',(a/b))


#in deferent way
# def eqn(a,b,eq):
#     return eval(eq)

# a = int(input("Enter first number: "))
# b = int(input("Enter second number: "))

# eq = input("Enter a equation to evaluate (a+b): ")

# print(eqn(a,b,eq))