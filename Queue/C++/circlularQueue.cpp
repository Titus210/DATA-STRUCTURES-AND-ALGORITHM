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
};