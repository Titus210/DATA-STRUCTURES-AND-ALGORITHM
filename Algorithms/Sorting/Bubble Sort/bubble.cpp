#include <iostream>
using namespace std;

void print_items(int *arr, int size)
{
    // print elements of the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void ascending(int *arr, int size)
{
    // outer loop to loop through passes
    for (int i = 0; i < size - 1; i++)
    {
        // inner loop to iterate over items
        bool flag = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            // check if the items are not in ascending order
            if (arr[j] > arr[j + 1])
            {
                // perform swap operation
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        // check if flag is false, meaning the array is already sorted
        if (flag == false)
        {
            break;
        }
    }
}

int main()
{
    cout << "_______-----------------------____________" << endl;
    cout << "-------------BUBBLE SORT---------------" << endl;

    int *array;
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // allocate memory for the array
    array = new int[size];

    if (array == NULL)
    {
        cout << "Sorry, could not allocate memory for the array." << endl;
        exit(1);
    }

    cout << "Memory allocation successful!" << endl;

    // use allocated memory
    for (int i = 0; i < size; i++)
    {
        cout << "Enter item: " << endl;
        cin >> array[i];
    }
    cout << "Unsorted order" << endl;
    print_items(array, size);

    ascending(array, size);
    cout << "Ascending order" << endl;
    print_items(array, size);
    // free memory
    delete[] array;

    return 0;
}
