#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

// Global Variables

int top = -1;
int n = 10, i= 0, val = 0;
int student_Id[];
int pos;

// Functions
bool isEmpty();
bool isFull();

void arrayDecl(int student_Id[])
{
    for( int i = 0; i<n; i++)
    {
        student_Id[i] = 0;
    }
}


bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}


bool isFull()
{
    if (top == n-1)
        return true;
    else
        return false;
}

void push(int val)
{
    if(isFull())
        printf("The Stack is full");
    else
        top++;
    student_Id[top] = val;
}


int  pop(int val)
{
    if(isEmpty()){
        printf("The Stack is Empty");
        return 0;
    }
    else
    {
        int popValue = student_Id[top];
        student_Id[top] = 0;
        top--;
        return popValue;
    }
}

int count()
{

    return (top + 1);
}

int peek(int pos)
{
    if(isEmpty())
    {
        printf("The Stack is Empty");
    }
    else
    {
        return student_Id[pos];
    }
}

void change(int pos, int val)
{
    student_Id[pos]  = val;
    printf("Value changed at location: %d", pos);

}

void display()
{
    printf("Elements in stack are: \n");
    for (int i= 10; i>=0; i--)
    {
        printf("Array items are: %d",student_Id[i]);
    }
}





int main()
{
    arrayDecl(student_Id);

    printf("Enter Value You Want to insert");
    scanf("%d",val);
    push(val);



    return 0;
}
