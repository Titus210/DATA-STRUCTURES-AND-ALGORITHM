#include <iostream>
using namespace std;

int main()
{
    int i, data;
    bool isFound = false;

    // declare array of elements
    int arr[5] = {12, 22, 24, 44, 12};
    int n = sizeof(arr) / sizeof(int);

    cout << "Enter Element to check on list" << endl;
    cin >> data;

    // loop through elements in array
    for (i = 0; i < n; i++)
    {
        // check if element is in list
        if (arr[i] == data)
        {
            cout << "Element found at position " << i + 1 << endl;
            isFound = true; // confirm element is found
            break;
        }
        cout << "Element not at position " << (i + 1) << endl;
        cout << "Still more " << (n) - (i + 1) << " position(s) to go" << endl;
    }

    // Check if element is not found
    if (isFound == false || i == n)
    {
        cout << "______SORRY ELEMENT NOT FOUND!!_____________" << endl;
    }
    return 0;
}
