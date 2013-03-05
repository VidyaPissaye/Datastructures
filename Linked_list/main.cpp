/* 
 * File:   main.cpp
 * Author: Vidya
 *
 * Created on February 22, 2013, 9:37 AM
 */

#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    List linked_list;
    int number = 0, elem = 0, before_after = 0;
    
    int empty = linked_list.is_empty();
    
    if(empty)
        cout << "The list is empty!" << endl;
    
    cout << "Enter the number of elements to be inserted into the list: " << endl;
    cin >> number;
    
    cout << "Enter the elements: " << endl;
    for (int i=0; i < number; i++) {
        cin >> elem;
        linked_list.insert_begin(elem);
    }
    
    cout << "The linked list is: " << endl;
    linked_list.display_nodes();
    
    cout << "Enter element to be deleted" <<endl;
    cin >> elem;
    linked_list.delete_node(elem);
    
    cout << "The linked list is: " << endl;
    linked_list.display_nodes();
    
    cout << "Enter the element to be inserted: " << endl;
    cin >> elem;
    cout << "after node" << endl;
    cin >> before_after;
    linked_list.insert_after(elem, before_after);
      
    cout << "The linked list is: " << endl;
    linked_list.display_nodes();
    
    cout << "Enter the element to be inserted: " << endl;
    cin >> elem;
    cout << "before node" << endl;
    cin >> before_after;
    linked_list.insert_before(elem, before_after);
      
    cout << "The linked list is: " << endl;
    linked_list.display_nodes();
    
    
}

