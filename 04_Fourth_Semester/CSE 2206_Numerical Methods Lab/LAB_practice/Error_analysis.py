def error_analysis(true_value, approx_value):
    absolute_error = abs(true_value - approx_value)
    relative_error = absolute_error / abs(true_value) if true_value != 0 else 0
    relative_error_percentage = relative_error * 100
    return absolute_error, relative_error, relative_error_percentage

true_value = 3.14159
approx_value = 3.14
ae , re , rep  = error_analysis(true_value, approx_value)
print(f"Absolute Error: {ae:.5f}")
print(f"Relative Error: {re:.5f}")
print(f"Relative Error Percentage: {rep:.5f}%")