/* 
 * File:   Stack.h
 * Author: Vidya
 *
 * Created on February 21, 2013, 10:22 PM
 */

#ifndef STACK_H
#define	STACK_H

#include <iostream>
using namespace std;

#define max 100

class Stack {
    int arr[max];
    int top;
    
public: 
    Stack() {
        top = -1;
    }
    
    void push(int data);
    int pop();
    bool empty();
};

#endif	/* STACK_H */

