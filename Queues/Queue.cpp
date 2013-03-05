
#include "Queue.h"


void Queue::enqueue(int data) {
    if(tail < max-1) {
        arr[tail++] = data;
    }
    else {
        cout << "Queue full!" << endl;
    }
}

int Queue::dequeue() {
    if(head != tail) {
        return(arr[head++]);
    }
    else {
        cout << "Queue empty!" << endl;
    }
}

bool Queue::empty() {
    if(head == tail) {
        return true;
    }
    else {
        return false;
    }
}
