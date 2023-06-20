def bubble_sort(array):
    """Sorts the given array using the bubble sort algorithm."""
    n = len(array)
    for i in range(n):
        # Flag to check if any swaps were made in the current iteration
        swapped = False
        for j in range(0, n - i - 1):
            if array[j] > array[j + 1]:
                # Swap elements using tuple unpacking
                array[j], array[j + 1] = array[j + 1], array[j]
                swapped = True
        if not swapped:
            # If no swaps were made in the current iteration, the array is already sorted
            break

def display_items(array):
    """Displays the items in the array."""
    for i, item in enumerate(array):
        print(f"Item {i} is {item}")

array = [12, 14, 3, 5, 76, 78]

print("Items before sorting:")
display_items(array)
bubble_sort(array)
print("Items after sorting:")
display_items(array)
