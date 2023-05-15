#include <iostream>
using namespace std;

#define MAX_QUEUE_SIZE 5

class CircularQueue
{
private:
    int queue[MAX_QUEUE_SIZE], front, rear;

public:
    /**
     * @brief Construct a new Circular Queue object with initial values of front and rear to -1
     *
     */
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    /**
     * @brief checks if the queue is full
     *
     * @return true if queue is full
     * @return false  if queue is not full
     */
    bool isFull()
    {
        if ((front == 0 && rear == MAX_QUEUE_SIZE - 1) || (rear == (front - 1) % (MAX_QUEUE_SIZE - 1)) || (front == rear + 1))
            return true;
        else
            return false;
    }

    /**
     * @brief checks if queue is empty
     *
     * @return true if front and rear are on their initial positions
     * @return false  if queue is empty
     */
    bool isEmpty()
    {
        if ((front == -1) && (rear == -1))
            return true;
        else
            return false;
    }

    /**
     * @brief inserts an element into the queue
     *
     * @param element: this is the element to insert
     */
    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "The queue is full" << endl;
        }
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % MAX_QUEUE_SIZE;
            queue[rear] = element;
            cout << element << " is inserted at position " << rear + 1 << endl;
        }
    }

    /**
     * @brief removes an element from the queue
     *
     * @return -1 if queue is empty else return  the element removed
     */
    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "No element in the queue" << endl;
            return -1;
        }
        else
        {
            element = queue[front]; // the  element in front position of queue is stored in element variable
            // reset the position to initial values if front is equal to rear
            if (front == rear)
            {
                front = -1;
                rear = 1;
            } // when queue has one element we reset position after deleting
            else
            {
                front = (front + 1) % MAX_QUEUE_SIZE;
            }
            cout << "Deleted: " << element << endl;
            return element;
        }
    }

    /**
     * @brief printing elements in the queue
     *
     */
    void display()
    {
        int i;
        if (isEmpty())
            cout << "The queue is empty" << endl;
        else
        {
            cout << "front of the queue: " << front << endl;
            cout << "Elements in the queue: " << endl;
            for (i = front; i != rear; i = (i + 1) % MAX_QUEUE_SIZE)
                cout << queue[i] << endl;
            cout << "rear of the queue: " << rear << endl;
        }
    }
};

int main()
{
    CircularQueue cq;

    cq.deQueue(); // fails since queue is empty

    cq.enQueue(10);
    cq.enQueue(20);
    cq.enQueue(30);
    cq.enQueue(40);
    cq.enQueue(50);
    cq.enQueue(60);

     cq.deQueue();
     cq.deQueue();
     cq.deQueue();
     cq.deQueue();

     cq.enQueue(300);
     cq.enQueue(400);
     cq.enQueue(300);
     cq.enQueue(400);

   cq.display();
}