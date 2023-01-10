#include <stdio.h>
using namespace std;

#define MAX 10
int main()
{
    // declare array and element to insert
    int students[10] = {1, 2, 3, 4, 5, 6}, elements;
    int i, pos = 0;

    // get element to store in array from user
    cout << "Enter element to store in array: " << std::endl;
    cin >> elements;

    // loop through array and shift elements to last index
    for (i = MAX; i > pos; i--)
    {
        students[i] = students[i + 1];

        // insert element
        students[pos] = elements;

        // print array
        for (i = 0; i < MAX; i++)
        {
            cout << "Student at index: " << i < < < < students[i] << endl;
        }
    }
}