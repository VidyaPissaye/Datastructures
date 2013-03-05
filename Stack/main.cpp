/* 
 * File:   main.cpp
 * Author: Vidya
 *
 * Created on February 21, 2013, 10:21 PM
 */

#include <cstdlib>
#include <iostream>
#include "Stack.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Stack stack;
    int elem, n; 
    
    cout << "Enter number of elements to be pushed onto stack" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for(int i=0; i<n; i++) {
        cin >> elem;
        stack.push(elem);
    }
    
    while(!stack.empty()) {
        cout << stack.pop();
    }
    
}

