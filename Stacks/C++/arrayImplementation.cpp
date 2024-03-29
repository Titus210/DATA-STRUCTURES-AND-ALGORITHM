#include <iostream>
using namespace std;

#define MAX 7 // maximum number of elements in stack is 7

// functions
void getOperation(int *choice);
int isFull(int *top);
int isEmpty(int *top);
void push(int *stack, int *top, int *data, int *choice);
void pop(int *stack, int *top, int *data);
void printStack(int *stack, int *top);

/**
 * @brief
 *
 */
int main()
{
  // declare stack
  int stack[MAX];
  int choice, top = -1, data;

  // @brief Ask user for stack operations
  getOperation(&choice);

  switch (choice)
  {
  case 1:
    isFull(&top);
    break;
  case 2:
    isEmpty(&top);
    break;
  case 3:
    push(stack, &top, &data, &choice);
    break;
  case 4:
    pop(stack, &top, &data);
    break;
  case 5:
    printStack(stack, &top);
    break;
  default:
    cout << "ERROR: Enter a valid choice";
    break;
  }
  printStack(stack, &top);

  return 0;
}

/**
 * @brief Get the Operation object
 *
 * @param choice
 */
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

int isFull(int *top)
{

  if (*top == MAX - 1)
  {
    cout << "Overflow occurred " << endl;
    return -1;
  }
  cout << "Stack not full" << endl;
  return 1;
}

/**
 * @brief isEmpty function checks if stack is empty by comparing the top element od stack with -1 which is initial value or
 * top is less than 0 which is obviously a negative number
 *
 * @param top this is the topmost element in the stack
 * @return int -1 if stack is empty and 1 if stack contains som elements
 */
int isEmpty(int *top)
{

  if (*top == -1 || *top < 0)
  {
    cout << "Underflow detected" << endl;
    return -1;
  }
  cout << "Stack is not empty" << endl;
  return 1;
}

/**
 * @brief
 *
 * @param stack
 * @param top
 * @param data
 */
void push(int *stack, int *top, int *data, int *choice)
{
  // check if stack is full
  if ((isFull(top) == -1))
  {
    cout << "Sorry we cant insert more elements to the stack " << endl;
    return;
  }
  cout << "Enter element to insert" << endl;
  cin >> *data;
  // increment the top of stack
  (*top)++;
  stack[*top] = *data;

}

/**
 * @brief
 *
 * @param stack
 * @param top
 * @param data
 */
void pop(int *stack, int *top, int *data)
{
  // check if stack is empty
  if ((isEmpty(top) == -1))
  {
    cout << " Cant remove element from an empty array" << endl;
    return;
  }
  *data = stack[*top];
  (*top)--;
  cout << "Element " << *data << " popped from the stack" << endl;
  return;
}

/**
 * @brief
 *
 * @param stack
 * @param top
 */
void printStack(int *stack, int *top)
{
  // check if stack is empty
  if ((isEmpty(top) == -1))
  {
    cout << " Cant Print elements in an empty array" << endl;
    return;
  }
  else
  {
    for (int i = 0; i <= *top; i++)
    {
      cout << "Element " << i + 1 << " in stack is: " << stack[i] << endl;
    }
    return;
  }
}
