true_value = float(input("Enter the true value: "))
approx_value = float(input("Enter the approximate value: "))

abs_error = abs(true_value- approx_value)
rel_error = abs_error / true_value
perc_error = rel_error * 100

print(f"Absolute Error: {abs_error:.3f}")
print(f"Relative Error: {rel_error:.3f}")
print(f"Percentage Error: {perc_error:.3f}%")