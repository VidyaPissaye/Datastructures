/* 
 * File:   main.cpp
 * Author: Vidya
 *
 * Created on March 1, 2013, 12:41 AM
 */

#include <cstdlib>
#include <iostream>
#include "Binary_Search_Tree.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    BST tree;
    
    int number = 0, elem = 0, before_after = 0;
    
    int empty = tree.is_empty();
    
    if(empty)
        cout << "The tree is empty!" << endl;
    
    cout << "Enter the number of elements to be inserted into the tree: " << endl;
    cin >> number;
    
    cout << "Enter the elements: " << endl;
    for (int i=0; i < number; i++) {
        cin >> elem;
        tree.insert_node(elem);
    }
    
    cout << "The tree is: " << endl;
    tree.inorder_traversal(tree.get_root());
    cout << endl;
    
    cout << "Enter the search element: " << endl;
    cin >> elem;
    Node* node = tree.search(elem);
    cout << node->data << endl;
    
    cout << "The minimum node is " << endl;
    node = tree.minimum(tree.get_root());
    cout << node->data << endl;
    
    cout << "The maximum node is " << endl;
    node = tree.maximum(tree.get_root());
    cout << node->data << endl;
    
    cout << "Determine the successor of " << endl;
    cin >> elem;
    node = tree.successor(elem);
    cout << node->data << endl;
    
    cout << "Enter the element to delete " << endl;
    cin >> elem;
    tree.delete_node(elem);
    cout << "The tree is: " << endl;
    tree.inorder_traversal(tree.get_root());
    cout << endl;
    node = tree.get_root();
    cout << "The root is " << node->data;
    
}

