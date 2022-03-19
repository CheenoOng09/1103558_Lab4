#include "Queue.h"
#include <iostream>
#include <list>

using namespace std;

int Size = 0;
std::list<int> *intQueue = NULL;
int Front = 0;
int Rear = 0;
int Count = 0;

Queue::Queue(int size){
    Size = size;
    list<int> queueList;
    intQueue = & queueList;    
    cout << "-- A Queue of " << Size << " is created." << endl;

}// constructor with size initialized to 10

Queue::~Queue(){
    cout << "-- A Queue of size " << Size << " is destroyed." << endl; 

} // destructor

void Queue::enqueue(int element){
    intQueue->push_back(element);
    // Rear = intQueue->size()-1; 
} // Insert an element in the rear end of a Queue

int Queue::dequeue(){
    int frontValue = intQueue->front();
    intQueue->pop_front();
    // Front = intQueue->front();
    return frontValue;
} // remove and then return the front most element in the Queue OR rescheduling waiting list based on the order

// when the process gets rescheduled + 2 for the variable execution time
int Queue::peek() {
    return Front;
} // return the front most element in the queue

int Queue::getCount(){
    return Count;
}// return the number of elements stored in the Queue

int Queue::getSize()
{
    return Size;
}// return Queue Size

bool Queue::isEmpty(){
    if (getCount() == 0){
        cout << "-- Warning: Queue is EMPTY now." << endl;
        return true;
    }
    else
        return false;
    // if empty, that means the program has finished processing all the waiting list and we should the time execution
}

bool Queue::isFull(){
    if(getCount() == getSize()){
        cout << "-- Warning: Queue is FULL now." << endl;
        return true;
    }
    else
        return false;
}

void Queue::clearQueue(){
    intQueue = NULL;
    Count = 0;
    Front = NULL;
    Rear = NULL;
} // clear the content of queue and reset front, rear, and count

// void printList(Node* n)
// {
//     while (n != NULL) {
//         cout << n->data << " ";
//         n = n->next;
//     }
// }

void Queue::printQueue() {
    cout<< "List printed" <<endl;
    // for (auto const &i: list) {
    //     std::cout << i << std::endl;
    // }
} // print the content of a queue from front to rear

