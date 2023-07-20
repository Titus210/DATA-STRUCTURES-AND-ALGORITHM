/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
const sortColors = function(nums) {
    let low = 0;
    let mid = 0;
    let high = nums.length - 1;
    
    while (mid <= high) {
      if (nums[mid] === 0) {
        swap(nums, low, mid);
        low++;
        mid++;
      } else if (nums[mid] === 1) {
        mid++;
      } else {
        swap(nums, mid, high);
        high--;
      }
    }
  };
  
  // Helper function to swap two elements in the array
  function swap(arr, i, j) {
    const temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  
  // Example usage:
  const nums = [2, 0, 2, 1, 1, 0];
  sortColors(nums);
  console.log(nums); // Output: [0, 0, 1, 1, 2, 2]
  