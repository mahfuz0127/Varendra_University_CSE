def f(x):
    return eval('x**3 - x - 2')

def df(x):
    return eval('3*x**2 - 1')

def newton_raphson(f, df, x0, tol=0.01, max_iter=25):
    if df(x0) == 0:
        print("Derivative is zero. No solution found.")
        return None
    
    x = x0
    for i in range(1, max_iter + 1):
        x_new = x - f(x) / df(x)
        approx_error = abs((x_new - x) / x_new) * 100 if x_new != 0 else float('inf')
        
        print(f"Iteration {i}: x = {x_new:.5f}, f(x) = {f(x_new):.5f}, Approx. Error = {approx_error:.5f}%")
        
        if approx_error < tol:
            print(f"Converged to root {x_new:.5f} with approximate error {approx_error:.5f}% after {i} iterations.")
            return x_new
        
        x = x_new

    print("Maximum iterations reached without convergence.")
    return x

x0 = float(input("Enter initial guess x0: "))
root = newton_raphson(f, df, x0)
if root is not None:
    print(f"Root found: {root:.5f}")