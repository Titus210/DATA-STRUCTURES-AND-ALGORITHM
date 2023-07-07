import math

def quadratic_equation_roots(a, b, c):
    # Function to calculate the roots of a quadratic equation
    discriminant = b**2 - 4*a*c

    if discriminant > 0:
        root1 = (-b + math.sqrt(discriminant)) / (2*a)
        root2 = (-b - math.sqrt(discriminant)) / (2*a)
        return root1, root2
    elif discriminant == 0:
        root = -b / (2*a)
        return root
    else:
        return None

def bisection_method(a, b, c, lower_limit, upper_limit, error_tolerance, max_iterations):
    # Function to find the root of a quadratic equation using the bisection method
    f_lower = a*lower_limit**2 + b*lower_limit + c
    f_upper = a*upper_limit**2 + b*upper_limit + c

    if f_lower * f_upper > 0:
        print("No root exists within the given limits.")
        return None

    iterations = 0
    while iterations < max_iterations:
        midpoint = (lower_limit + upper_limit) / 2
        f_midpoint = a*midpoint**2 + b*midpoint + c

        if abs(f_midpoint) < error_tolerance:
            return midpoint

        if f_midpoint * f_lower < 0:
            upper_limit = midpoint
        else:
            lower_limit = midpoint

        iterations += 1

    print("Maximum number of iterations reached.")
    return None

# Get input from the user
equation = input("Enter the quadratic equation (in the form 'ax^2 + bx + c'): ")
lower_limit = float(input("Enter the lower limit: "))
upper_limit = float(input("Enter the upper limit: "))
error_tolerance = float(input("Enter the error tolerance: "))
max_iterations = int(input("Enter the maximum number of iterations: "))

# Extract the coefficients from the equation
coefficients = equation.split(' ')
a = float(coefficients[0][:-1])
b = float(coefficients[2][:-1])
c = float(coefficients[3])

# Calculate the root using the bisection method
root = bisection_method(a, b, c, lower_limit, upper_limit, error_tolerance, max_iterations)

# Print the result
if root is not None:
    print("Root found: ", root)
else:
    print("Unable to find the root within the given constraints.")
