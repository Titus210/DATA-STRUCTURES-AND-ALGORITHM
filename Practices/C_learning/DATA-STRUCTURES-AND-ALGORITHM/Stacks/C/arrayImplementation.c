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



int  pop()
{
    if(isEmpty())
    {
        printf("The Stack is Empty");
        main();
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


int peek()
{
    printf("Enter Position to access:\n");
    scanf("%d", &pos);
    if(isEmpty())
    {
        printf("The Stack is Empty\n Returning to main menu.....\n");
        main();
    }
    else
    {
        printf("%d",student_Id[pos]);
        return student_Id[pos];
    }
}

void change()
{
    printf("Enter Position to Change:\n");
    scanf("%d", &pos);
    printf("Enter Value to Insert:\n");
    scanf("%d", &pos);
    student_Id[pos]  = val;
    printf("Value changed at location: %d", pos);

}


void display()
{
    printf("Elements in stack are: \n");
    for (int i= 10; i>=0; i--)
    {
        printf("%d \n",student_Id[i]);
    }
    main();
}


int main()
{
     printf("Which Operation do you want to perform?:\n 1: Insert\n 2: Remove\n 3: Change\n 4: Count\n 5: Peek \n 6: Display \n");
      scanf("%d", &option);
      switch(option)
            {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            change;
                break;
        case 4:
            count();
                break;
        case 5:
            peek();
                break;
        case 6:
            display();
            break;
        default:
            printf("Which Operation do you want to perform?:\n 1: Insert\n 2: Remove\n 3: Change\n 4: Count\n 5: Peek\n 6: Display \n");
    }



    return 0;
}
