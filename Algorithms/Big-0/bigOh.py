import matplotlib.pyplot as plt
import numpy as np

# Function to analyze (example: O(1), O(log n), O(n), O(n^2))
def analyze_function(n):
    return n ** 2

# Create data points for the plot
x = np.arange(1, 11) # Range of input values (1 to 10, for example)
y = [analyze_function(n) for n in x]

# Plot the Big-O analysis
plt.plot(x, y, label='O(n^2)', color='blue', linestyle='-', marker='o')

# Add labels and title to the plot
plt.xlabel('Input Size (n)')
plt.ylabel('Time Complexity')
plt.title('Big-O Analysis')
plt.legend()

# Save the plot as an image file in the same folder
plt.savefig('big_o_analysis.png')

# Show the plot (optional)
plt.show()
