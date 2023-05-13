#include <iostream>
using namespace std;

#define MAX 5
class Queue
{
private:
    int items[MAX], front, rear;

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

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }


};

int main()
{
    // create an instance of queue/ queue object
    Queue q;

    return 0;
}