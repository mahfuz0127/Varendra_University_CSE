def f(x):
    return eval('x**3 - x - 2')

def secant_method(x0, x1, tol=1e-7, max_iter=100):
    for iteration in range(max_iter):
        if f(x1) - f(x0) == 0:
            print("Division by zero encountered in secant method.")
            return None
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0))
        
        print(f"Iteration {iteration+1:.3f}: x2 = {x2:.3f}, f(x2) = {f(x2):.3f}")
        if abs(x2 - x1) < tol:
            return x2
        x0, x1 = x1, x2
    print("Maximum iterations reached without convergence.")
    return None

x0 = float(input("Enter first initial guess (x0): "))
x1 = float(input("Enter second initial guess (x1): "))
root = secant_method( x0, x1)
if root is not None:
    print(f"Root found: {root:.3f}")