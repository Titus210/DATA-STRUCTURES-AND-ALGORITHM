#include <iostream>
using namespace std;

// define maximum  value array can store
#define MAX 10;

int main()
{
    // declare variables
    int array[MAX];
    int i, element , position;

    // initialize array with 0
    for(i = 0; i <= MAX ; i++){
        array[i] = 0;
    }

    // print the array
    for(i = 0; i <= MAX ; i++){
        cout << "Array at position: " << i + 1 << "is" << array[i]; // position count starts from 1 not index
    }

}