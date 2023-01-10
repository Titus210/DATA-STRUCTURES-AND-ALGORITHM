#include <iostream>
using namespace std;

// define maximum  value array can store
#define MAX 10

int main()
{
    // declare variables
    int array[MAX];
    int i, element , position;

    // initialize array with 0
    for(i = 0; i <= MAX ; i++){
        array[i] = 0;
    }

    // ask user for position
    cout << "Which position do you want to insert: " << std::endl;
    cin >> position;

    // check if position is maximum than array size
    if ( position >= MAX )
    {
	cout << "Invalid Position " <<endl;
	return -1;
    }


    // element to insert
    cout << "Enter element to insert to array" << std::endl;
    cin >> element;
    // shift element to left
    for( i = 0; i <= MAX; i++){
	array[i] = array[i - 1];
    }
    // insert element to position
    	array[position] = element;

    // print the array
    for(i = 0; i <= MAX ; i++){
        cout << "Array at position: " << i  << "is : " << array[i] <<std::endl; 
    }

}
