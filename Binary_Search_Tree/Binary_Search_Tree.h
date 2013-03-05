/* 
 * File:   Binary_Search_Tree.h
 * Author: Vidya
 *
 * Created on March 1, 2013, 12:47 AM
 */

#ifndef BINARY_SEARCH_TREE_H
#define	BINARY_SEARCH_TREE_H

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node* parent;
};

class BST {
    
    Node* root;
    
public:
    
    BST() {
        root = NULL;
    };
    
    ~BST() {
     //   delete_tree();
    }
    
    void delete_tree();
    void inorder_traversal(Node* node);
    Node* search(int data);
    Node* minimum(Node* node);
    Node* maximum(Node* node);
    Node* successor(int data);
    void insert_node(int data);
    void delete_node(int data);
    void replace_node(Node* a, Node* b);
    bool is_empty();
    Node* get_root();
    
};

#endif	/* BINARY_SEARCH_TREE_H */

