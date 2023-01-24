#include <stdio.h>
#include <stdbool.h>

// define max for queue
#define MAX 5

// define queue to hold elements
int queue[MAX];

// declare head and tail
int front = -1;
int rear = -1;
int option = 0;
int item = 0;
// main function to contain all operations
int main()
{
    printf("Which option do you want to perform:\n 1.Add elements\n 2.Delete Items\n 3.Display Items\n 4.Check Item on front\n 5.Check if empty\n 6.Check if full \n");
    scanf("%d", &option);
    switch(option)
    {
    case 1:
        printf("Enter item to add on stack");
        scanf("%d",&item);
        enqueue();
    case 2:
        dequeue();
    case 3:
        display();
    case 4:
        checkFront();
    case 5:
        isEmpty();
    case 6:
        isFull();

    }
}
void enqueue(int item)
{
    // check if queue is empty
    if(isEmpty())
    {
        printf("Stack overflow");
    }

    // check if queue is empty assign front and rear to 0
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }

    // insert data if not empty and if items are in stack
    else
    {
        rear++;
        queue[rear] = item;
    }
    for(int i = 0; i<= sizeof(queue)/sizeof(queue[0]); i++)
    printf("Elements in queueis :%d \n", queue[i]);

}

void dequeue()
{
};

void display()
{
};

void checkFront()
{
};

void isEmpty()
{
    if(rear == MAX -1)
        return true;
    else
        return false;
};

void isFull()
{
    if(rear == MAX -1)
        return true;
    else
        return false;
};



