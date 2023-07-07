import matplotlib.pyplot as plt
import numpy as np

def constant_time(n):
    return 1

def linear_time(n):
    return n

def quadratic_time(n):
    return n**2

def logarithmic_time(n):
    return np.log2(n)

def plot_time_complexities():
    input_sizes = np.arange(1, 101)
    constant = [constant_time(n) for n in input_sizes]
    linear = [linear_time(n) for n in input_sizes]
    quadratic = [quadratic_time(n) for n in input_sizes]
    logarithmic = [logarithmic_time(n) for n in input_sizes]

    plt.plot(input_sizes, constant, label='O(1)')
    plt.plot(input_sizes, linear, label='O(n)')
    plt.plot(input_sizes, quadratic, label='O(n^2)')
    plt.plot(input_sizes, logarithmic, label='O(log n)')

    plt.xlabel('Input Size')
    plt.ylabel('Time Complexity')
    plt.title('Time Complexities of Different Big O Flavors')
    plt.legend()
    plt.grid(True)
    plt.show()

# Plot the time complexities
plot_time_complexities()
