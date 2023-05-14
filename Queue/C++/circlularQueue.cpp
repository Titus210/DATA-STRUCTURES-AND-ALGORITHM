#include <iostream>
using namespace std;

#define MAX_QUEUE_SIZE 5

class CircularQueue{
    private:
        int queue[MAX_QUEUE_SIZE], front, rear;
    public:
    /**
     * @brief Construct a new Circular Queue object with initial values of front and rear to -1
     * 
     */
    CircularQueue(){
        front= -1;
        rear = -1;
    }


};