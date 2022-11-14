#include <stdio.h>
#include <stdbool.h>

// Global Variables

int top = -1;
int n = 10, i, val,option = 0;
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
    if (top == n)
        return true;
    else
        return false;
}

void push()
{
    printf("Enter Value You Want to insert");
    scanf("%d",&val);

    if(isFull()){
        printf("The Stack is full\n");
        main();
    }
    else{
        top++;
    student_Id[top] = val;
    }
    printf("Elements in array: \n");
    for(int i = 0; i <= n; i++)
    {
        printf("%d\n",student_Id[i]);
    }
      printf("Do you want to insert another element?:\n 1: Yes\n 2: Main Menu");
      scanf("%d", &option);
      switch(option)
            {
        case 1:
            push();
        case 2:
            main();
    }

}



int  pop(int val)
{
    if(isEmpty())
    {
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


          printf("Which Operation do you want to perform?:\n 1: Insert\n 2: Remove\n 3: Change\n 4: Count\n");
      scanf("%d", &option);
      switch(option)
            {
        case 1:
            push();
        case 2:
            pop();
        case 3:
            change;
        case 4:
            count();
        case 5:
            peek();
        default:
            printf("Which Operation do you want to perform?:\n 1: Insert\n 2: Remove\n 3: Change\n 4: Count\n 5: Peek \n");
    }

    push();



    return 0;
}
