import pandas as pd

def f(x, equation):
    return eval(equation)

equation = input("Enter the equation in terms of x (e.g., x**3 + 4*x**2 - 1): ")
a = float(input("Enter the lower bound (a): "))
b = float(input("Enter the upper bound (b): "))
tol = float(input("Enter the tolerance: "))

fa = f(a, equation)
fb = f(b, equation)

if fa * fb > 0:
    print("Bisection method fails. f(a) and f(b) should have opposite signs.")
else:
    data = []
    prev_c = None
    iteration = 1

    while True:
        c = (a * fb - b * fa) / (fb - fa)
        fc = f(c, equation)

        if prev_c is not None:
            approx_error = abs((c - prev_c) / c) * 100
        else:
            approx_error = None

        data.append([iteration, a, b, c, fa, fb, fc, approx_error])

        if approx_error is not None and approx_error < tol:
            break

        prev_c = c

        if fa * fc < 0:
            b = c
            fb = fc
        else:
            a = c
            fa = fc

        iteration += 1

    df = pd.DataFrame(data, columns=["Iter", "a", "b", "x_c", "f(a)", "f(b)", "f(x_c)", "Approx. Error (%)"])
    print("\Falsi Method Iteration Table (Stopping when error < 5%):")
    print(df.to_string(index=False))

    print(f"\nRoot found: x_c = {c}, f(x_c) = {fc}")
    print(f"Approximate relative error: {approx_error:.2f}%")