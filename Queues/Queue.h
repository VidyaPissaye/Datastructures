/* 
 * File:   Queue.h
 * Author: Vidya
 *
 * Created on February 22, 2013, 12:09 AM
 */

#ifndef QUEUE_H
#define	QUEUE_H

#include <iostream>
using namespace std;

#define max 100

class Queue {
    int arr[max];
    int head, tail;
    
public:
    Queue(){
        head = tail = 0;
    }
    
    void enqueue(int data);
    int dequeue();
    bool empty();
};

#endif	/* QUEUE_H */

