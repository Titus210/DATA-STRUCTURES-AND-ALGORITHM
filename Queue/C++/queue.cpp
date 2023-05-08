#include <iostream>
using namespace std;

#define MAX 5

void queue_insertion(int *queue, int *front, int *rear);
int isFull(int *rear);
int isEmpty(int *front, int *rear);
void queue_insertion(int *queue, int *front, int *rear);

int main()
{
    // declare front and rear
    int front = -1, rear = -1, item;
    int queue[MAX];

    // call insertion
    queue_insertion(queue, &front, &rear);
}

int isFull(int *rear)
{
    if ((*rear == MAX - 1))
    {
        cout << "Stack is full: " << endl;
        return -1;
    }
    else
    {
        return 1;
    }
}

int isEmpty(int *front, int *rear)
{
    // check if queue is empty
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
}

void queue_insertion(int *queue, int *front, int *rear)
{
    // check if queue is full
    if (isFull(rear) == -1)
        return;
    else
    {
        // check queue is initially empty
        if (front == -1)
        {
            front++;

            // ask user for input
            cout << "Enter element to enter to queue: " << endl;
            cin >> item;

            // increment rear
            rear++;
            // insert item
            queue[*rear] = item;
        }
    }
}
