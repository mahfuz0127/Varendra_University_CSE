import pandas as pd

def calculate_x_minus_xi(i, val, x):
    prod = 1
    for j in range(i):
        prod *= (val - x[j])
    return prod

def newton_divided_difference(x, y, val):
    n = len(x)

    table = [[None] * n for _ in range(n)]

    for i in range(n):
        table[i][0] = y[i]

    for j in range(1, n):
        for i in range(n - j):
            table[i][j] = (table[i+1][j - 1] - table[i][j - 1]) / (x[i+j] - x[i])

    col_names = [f"Δ^{i}y" for i in range(n)]
    df = pd.DataFrame(table, columns=col_names)
    df.insert(0, "x", x)

    print("=> By using Newton Divided Difference Interpolation:\n")
    print(df.round(4).fillna(""))

    result = table[0][0]
    for i in range(1, n):
        result += table[0][i] * calculate_x_minus_xi(i, val, x)

    print(f"\nApproximate result at point {val} is: {result:.5f}")
    return None


x = [3.6, 3.8, 3.9, 4.0, 4.2]
y = [1.675, 1.436, 1.318, 1.246, 1.128]
val = 4.1

newton_divided_difference(x, y, val)
