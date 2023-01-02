#include <iostream>
using namespace std;

#define MAX 5


// ----------------------------------------------------------------
int main(){
    // variables declaration
    int arr[MAX], i;
    // inserting elements into array
    for (i = 0; i <= MAX - 1; i++)
    {
        cout << "Enter element of array : " << endl;
        cin >> arr[i];
    }

    // printing elements in array
    for (i = 0; i < MAX; i++)
    {
        cout << "Element at index" << i << "is"  <<  arr[i] << endl;
    }

    return 0;
}