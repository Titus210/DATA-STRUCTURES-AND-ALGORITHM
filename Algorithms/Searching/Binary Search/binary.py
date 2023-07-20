def binary_search(nums, target):
    left, right = 0, len(nums) - 1

    while left <= right:
        mid = left + (right - left) // 2

        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1

nums = [1, 3, 5, 7, 9, 11, 13]
target = 5

result = binary_search(nums, target)
print(result)  # Output: 2 (index of the element 5 in the array)
