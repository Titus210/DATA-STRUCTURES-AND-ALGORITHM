import time
import matplotlib.pyplot as plt

def constant_time(n):
    return 1

def logarithmic_time(n):
    if n <= 1:
        return 1
    else:
        return logarithmic_time(n // 2) + logarithmic_time(n // 2)

def linear_time(n):
    result = 0
    for i in range(n):
        result += i
    return result

def linearithmic_time(n):
    if n <= 1:
        return 1
    else:
        return linearithmic_time(n // 2) + linearithmic_time(n // 2)

def quadratic_time(n):
    result = 0
    for i in range(n):
        for j in range(n):
            result += i + j
    return result

def exponential_time(n):
    if n <= 0:
        return 1
    else:
        return exponential_time(n - 1) + exponential_time(n - 1)

def measure_time(func, n):
    start_time = time.time()
    func(n)
    end_time = time.time()
    return end_time - start_time

def plot_graph(x, y, label):
    plt.plot(x, y, label=label)

if __name__ == "__main__":
    n_values = [10, 50, 100, 500, 1000]
    
    constant_times = [measure_time(constant_time, n) for n in n_values]
    logarithmic_times = [measure_time(logarithmic_time, n) for n in n_values]
    linear_times = [measure_time(linear_time, n) for n in n_values]
    linearithmic_times = [measure_time(linearithmic_time, n) for n in n_values]
    quadratic_times = [measure_time(quadratic_time, n) for n in n_values]
    exponential_times = [measure_time(exponential_time, n) for n in n_values]

    plt.figure(figsize=(10, 6))
    plot_graph(n_values, constant_times, "O(1) - Constant Time")
    plot_graph(n_values, logarithmic_times, "O(log n) - Logarithmic Time")
    plot_graph(n_values, linear_times, "O(n) - Linear Time")
    plot_graph(n_values, linearithmic_times, "O(n log n) - Linearithmic Time")
    plot_graph(n_values, quadratic_times, "O(n^2) - Quadratic Time")
    plot_graph(n_values, exponential_times, "O(2^n) - Exponential Time")

    plt.xlabel("Input Size (n)")
    plt.ylabel("Time (seconds)")
    plt.title("Big O Notation - Time Complexity")
    plt.legend()
    plt.grid(True)
    plt.show()
