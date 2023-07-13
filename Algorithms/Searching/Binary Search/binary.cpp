#include <iostream>
using namespace std;

int binarySearch(int array[], int n, int data)
{
    int left = 0, right = n - 1;

    // loop through array while left is less than right
    while (left < right)
    {
        int mid = ((left + right) / 2);

        // check if data is in the mid point
        if (data == array[mid])
            return mid;

        // check if data is greater than mid point
        else if (data > mid)
        {
            left = mid + 1; // reduce search space from right
        }
        // check if data us less than mid point
        else
            right = mid - 1; // reduce search space from right
    }

    // if element is not found
    return -1;
}

// bool isSorted(int arr[])
// {
//     // check if arr is sorted
// }

int main()
{
    // declare and initialize array
    int array[10] = {12, 22, 23, 45, 67, 83, 92, 96, 11};
    int n = (sizeof(array) / sizeof(int));
    int data = 12;

    int search_result = binarySearch(array, n, data);
    // if element is not found
    if (search_result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at position " << search_result << endl;
    }

    // // check if elements are sorted
    // if (isSorted(array))
    // {
    //     // execute here
    // }

    // // ask user to sort if not
    // cout << "Sort the array to search" << endl;

    return 0;
}