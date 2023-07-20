import matplotlib.pyplot as plt
import numpy as np

# Functions to analyze (example: O(1), O(log n), O(n), O(n^2))
def constant_time(n):
    return 1

def logarithmic_time(n):
    return np.log2(n)

def linear_time(n):
    return n

def quadratic_time(n):
    return n ** 2

# Create data points for the plot
x = np.arange(1, 11) # Range of input values (1 to 10, for example)

# Plot the Big-O analysis for different functions
plt.plot(x, [constant_time(n) for n in x], label='O(1)', color='blue', linestyle='-', marker='o')
plt.plot(x, [logarithmic_time(n) for n in x], label='O(log n)', color='green', linestyle='-', marker='o')
plt.plot(x, [linear_time(n) for n in x], label='O(n)', color='orange', linestyle='-', marker='o')
plt.plot(x, [quadratic_time(n) for n in x], label='O(n^2)', color='red', linestyle='-', marker='o')

# Add labels and title to the plot
plt.xlabel('Input Size (n)')
plt.ylabel('Time Complexity')
plt.title('Big-O Analysis')
plt.legend()

# Save the plot as an image file in the same folder
plt.savefig('big_o_analysis.png')

# Show the plot (optional)
plt.show()
