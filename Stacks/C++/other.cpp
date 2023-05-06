// THIS PROGRAM IS TO DEMONSTRATE THE OPERATIONS PERFORMED
// ON THE STACK AND IT IS IMPLEMENTATION USING ARRAYS
// CODED AND COMPILED IN TURBO C
#include <stdio.h>
#include <conio.h>
// Defining the maximum size of the stack
#define MAXSIZE 100
// Declaring the stack array and top variables in a structure
struct stack
{
    int stack[MAXSIZE];
    int Top;
};
// type definition allows the user to define an identifier that would
// represent an existing data type. The user-defined data type identifier
// can later be used to declare variables.
typedef struct stack NODE;

// This function will add/insert an element to Top of the stack
void push(NODE *pu)
{
    int item;
    // if the top pointer already reached the maximum allowed size then
    // we can say that the stack is full or overflow
    if (pu->Top == MAXSIZE–1)
    {
        printf(“\nThe Stack Is Full”);
        getch();
    }
    // Otherwise an element can be added or inserted by
    // incrementing the stack pointer Top as follows
    else
    {
        printf(“\nEnter The Element To Be Inserted = ”);
        scanf(“% d”, &item);
        pu->stack[++pu->Top] = item;
    }
}
// This function will delete an element from the Top of the stack
void pop(NODE *po)
{
    int item;
    // If the Top pointer points to NULL, then the stack is empty
    // That is NO element is there to delete or pop
    if (po->Top == -1)
        printf(“\nThe Stack Is Empty”);
    // Otherwise the top most element in the stack is popped or
    // deleted by decrementing the Top pointer
    else
    {
        item = po->stack[po->Top--];
        printf(“\nThe Deleted Element Is = % d”, item);
    }
}
// This function to print all the existing elements in the stack
void traverse(NODE *pt)
{
    int i;
    // If the Top pointer points to NULL, then the stack is empty
 
        // That is NO element is there to delete or pop
        if (pt->Top == -1)
            printf(“\nThe Stack is Empty”);
    // Otherwise all the elements in the stack is printed
    else
    {
        printf(“\n\nThe Element(s) In The Stack(s) is / are...”);
        for (i = pt->Top; i >= 0; i--)
            printf(“\n % d”, pt->stack[i]);
    }
}
void main()
{
    int choice;
    char ch;
    // Declaring an pointer variable to the structure
    NODE *ps;
    // Initializing the Top pointer to NULL
    ps->Top =–1;
    do
    {
        clrscr();
        // A menu for the stack operations
        printf(“\n1.PUSH”);
        printf(“\n2.POP”);
        printf(“\n3.TRAVERSE”);
        printf(“\nEnter Your Choice = ”);
        scanf(“% d”, &choice);
        switch (choice)
        {
        case 1: // Calling push() function by passing
            // the structure pointer to the function
            push(ps);
            break;
        case 2: // calling pop() function
            pop(ps);
            break;
        case 3: // calling traverse() function
            traverse(ps);
            break;
        default:
            printf(“\nYou Entered Wrong Choice”);
        }
        printf(“\n\nPress(Y / y) To Continue = ”);
        // Removing all characters in the input buffer
        // for fresh input(s), especially <<Enter>> key
        fflush(stdin);
        scanf(“% c”, &ch);
    } while (ch == 'Y' || ch == 'y');
}