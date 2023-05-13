#include <iostream>
using namespace std;

#define MAX 5
class Queue
{
private:
    int queue[MAX], front, rear;

public:
    /**
     * @brief Constructor to initialize front and rear to -1
     * object is instantiated
     *
     */
    Queue()
    {
        front = -1;
        rear = -1;
    }

    /**
     * @brief Checks if queue is full
     * @return true if queue is full
     * @return false if queue is empty
     */
    bool isFull()
    {
        if (front == 0 && rear == MAX - 1)
            return true;
        else
            return false;
    }
    /**
     * @brief checks if queue is empty
     *
     * @return true if queue is empty
     * @return false if queue is not empty
     */
    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }
    /**
     * @brief inserts and element to queue if queue is not empty
     * @param element this is the element to insert to queue
     */
    void enQueue(int element)
    {
        if (isFull())
            cout << "Queue is full" << endl;

        else
        {
            if (front == -1)
                front = 0; // increment position of front on first insertion
            rear++;
            queue[rear] = element;
            cout << element << " has been inserted to position " << rear + 1 << endl;
        }
    } /**
       * @brief Method to remove
       *
       * @return removed element
       */

    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else
        {
            element = queue[front];
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
            cout << "Deleted: " << element << endl;
            return (element);
        }
    }
    /**
     * @brief Display the elements in queue
     *
     */
    void display()
    {
        int i;
        if (isEmpty())
        {
            cout << "Empty Queue" << endl;
        }
        else
        {
            cout << "Front element" << front << endl;
            cout << "Items in the queue" << endl;
            for (i = front; i <= rear; i++)
                cout << queue[i] << endl;
            cout << "rear element" << rear << endl;
        }
    }
};

int main()
{
    // create an instance of queue/ queue object
    Queue q;

    // test cases
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);

    // dequeue
    for (int i = 0; i < MAX - 5; i++)
    {
        q.deQueue();
    }
    q.deQueue();

    // print elements in queue
    q.display();

    return 0;
}