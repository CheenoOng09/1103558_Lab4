#include <iostream>
#include "Queue.cpp"

using namespace std;

int main()
{
    int qSize = 15;

    Queue *myQueue = new Queue(qSize);
    myQueue->printQueue();
}
