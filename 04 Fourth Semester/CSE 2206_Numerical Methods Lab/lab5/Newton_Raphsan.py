from math import exp

def f(x):
    return x * exp(x) - 1

def df(x):
    return exp(x) * (x + 1)

def newton_raphson(f, df, x0, tol=1e-3, max_iter=100):
    if df(x0) == 0:
        print("Derivative is zero. No solution found.")
        return None
    
    x = x0
    for i in range(1,max_iter):
        x_new = x - f(x) / df(x)
        ae = abs(x_new - x)
        print(f"iterations = {i}, x = {x_new:.3f}, f(x) = {f(x_new):.3f}, absolute error = {ae:.3f}")
        if ae <= tol:
            return x_new
        x = x_new

    print("Maximum iterations reached. No solution found.")
    return None 

# Example usage
x0 = float(input("Enter initial guess x0: "))
root = newton_raphson(f, df, x0)
if root is not None:
    print(f"Root found: {root:.3f}")