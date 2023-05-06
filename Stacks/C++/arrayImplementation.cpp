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
  cout << choice << endl;

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
  cin >> *choice;
}

/**
 * @brief it checks if stack is full bu comparing top element with the maximum size of stack -1 since array indexing starts from 0
 * 
 * @param top this is the top element of stack
 * @return int -1 if stack is full and 1 if the stack is not full
 */

int isFull(int *top){

  if(*top == MAX -1)
    return -1;
  return 1;

}

/**
 * @brief isEmpty function checks if stack is empty by comparing the top element od stack with -1 which is initial value or 
 * top is less than 0 which is obviously a negative number
 * 
 * @param top 
 * @return int -1 if stack is empty and 1 if stack contains som elements
 */
int isEmpty(int *top){

  if(*top == -1 || *top < 0)
    return -1;
  return 1;

}