def f(x):
    return eval('x**3 - x - 2')

a = float(input("Enter the lower bound (a): "))
b = float(input("Enter the upper bound (b): "))

fa = f(a)
fb = f(b)

def bisection_method(a, b, fa, fb, tol=0.01, max_iter=25):
    if fa * fb > 0:
        print("Bisection method fails. f(a) and f(b) should have opposite signs.")
        return None

    for iteration in range(1, max_iter + 1):
        c = (a + b) / 2
        fc = f(c)

        approx_error = abs((b - a) / c) * 100

        print(f"Iteration {iteration}: a = {a:.5f}, b = {b:.5f}, c = {c:.5f}, f(a)= {fa:.5f}, f(b)= {fb:.5f}, f(c) = {fc:.5f}, Approx. Error = {approx_error:.5f}%")

        if approx_error < tol:
            print(f"Converged to root {c:.5f} with approximate error {approx_error:.5f}% after {iteration} iterations.")
            return c

        if fa * fc < 0:
            b = c
        else:
            a = c


    print("Maximum iterations reached without convergence.")
    return (a + b) / 2

root = bisection_method(a, b, fa, fb)
if root is not None:
    print(f"Root found: {root:.5f}")

def f(x):
    return eval('x**3 - x - 2')
