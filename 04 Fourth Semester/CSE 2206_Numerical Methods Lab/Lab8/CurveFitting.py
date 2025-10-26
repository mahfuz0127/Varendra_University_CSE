import numpy as np
import matplotlib.pyplot as plt

def polynomial_fit(x, y, degree):
    """
    Fit a polynomial of given degree to the data points (x, y).

    Parameters:
    x (array-like): x-coordinates of the data points.
    y (array-like): y-coordinates of the data points.
    degree (int): Degree of the polynomial to fit.

    Returns:
    coeffs (ndarray): Coefficients of the fitted polynomial, highest degree first.
    """
    coeffs = np.polyfit(x, y, degree)
    return coeffs

def plot_fit(x, y, coeffs):
    """
    Plot the original data points and the fitted polynomial curve.

    Parameters:
    x (array-like): x-coordinates of the data points.
    y (array-like): y-coordinates of the data points.
    coeffs (ndarray): Coefficients of the fitted polynomial.
    """
    # Generate x values for plotting the fitted curve
    x_fit = np.linspace(min(x), max(x), 100)
    # Evaluate the polynomial at the x_fit points
    y_fit = np.polyval(coeffs, x_fit)

    # Create the plot
    plt.scatter(x, y, color='red', label='Data Points')
    plt.plot(x_fit, y_fit, color='blue', label='Fitted Polynomial')
    plt.xlabel('X-axis')
    plt.ylabel('Y-axis')
    plt.title('Polynomial Fit')
    plt.legend()
    plt.grid()
    plt.show()