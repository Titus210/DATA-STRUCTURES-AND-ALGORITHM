#include <iostream>
using namespace std;

int binarySearch(int array[], int data, int low, int high)
{

    if (high >= low)
    {
        int mid = (low + high) / 2;

        // check
        if (array[mid] == data)
        {
            cout << "element found at position " << (mid) << endl;
        }

        // search right
        else if (array[mid] > data)
        {
            return binarySearch(array, data, low, mid - 1);
        }
        else
            return binarySearch(array, data, mid + 1, high);
    }
}
int main()
{

    int array[] = {2, 3, 4, 5, 44, 68, 99, 104};
    int low = 0;
    int high = (sizeof(array) / sizeof(int));

    int data = 68;

    binarySearch(array, data, low, high);
}