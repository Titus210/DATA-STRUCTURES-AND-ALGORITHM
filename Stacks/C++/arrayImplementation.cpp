#include <iostream>
using namespace std;

#define MAX 7 // maximum number of elements in stack is 7

// functions
void getOperation(int *choice);

int main()
{
  // declare stack
  int stack[MAX];
  int choice, top, data;

  /**
   * @brief Ask user for stack operations
   *
   */
  getOperation(&choice);

  switch (choice)
  {
  case 1:
    isFull(&top);
  case 2:
    isEmpty(&top);
  case 3:
    push(stack, &top);
  case 4:
    pop(stack, &top, &data);
  case 5:
    printStack(stack);
  default:
    cout << "ERROR: Enter a valid choice";
  }
}

// get operation
void getOperation(int *choice)
{
  cout << "What stack operation do you want to perform?" << endl;
  cout << "1: Check if stack is full: " << endl;
  cout << "2: Check if stack is Empty: " << endl;
  cout << "3: Insert an element to the stack: " << endl;
  cout << "4: Remove an element from the stack: " << endl;
  cout << "5: Print all the elements in the stack: " << endl;
  cin >> choice;
}