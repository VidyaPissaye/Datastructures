
#include "Binary_Search_Tree.h"

bool BST::is_empty() {
    if(root == NULL) {
        return true;
    }
    else {
        return false;
    }
}

Node* BST::get_root() {
    return root;
}

void BST::inorder_traversal(Node* node) {
    
    if(node != NULL) {
        inorder_traversal(node->left);
        cout << node->data << " ";
        inorder_traversal(node->right);
    }
}

void BST::insert_node(int data){
    
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    Node* ptr = root;
    Node* parent_node = NULL;
    
    while(ptr != NULL) {
        parent_node = ptr;
        
        if(data < ptr->data) {
            ptr = ptr->left;
        }
        else {
            ptr = ptr->right;
        }
    }
    
    if(parent_node == NULL) {
        root = node;
    }
    else if(data < parent_node->data) {
        parent_node->left = node;
        node->parent = parent_node;
    }
    else {
        parent_node->right = node;
        node->parent = parent_node;
    }
}

Node* BST::search(int data) {
    Node* ptr = root;
    
    while((ptr != NULL) && (data != ptr->data)) {
        if(data < ptr->data){
            ptr = ptr->left;
        }
        else {
            ptr = ptr->right;
        }
    }
    return ptr;
}

Node* BST::minimum(Node* node) {
    
    Node* ptr = node;
    Node* min;
    
    while(ptr != NULL) {
        min = ptr;
        ptr = ptr->left;
    }
    return min;
    
}

Node* BST::maximum(Node* node) {
    
    Node* ptr = node;
    Node* max;
    
    while(ptr != NULL) {
        max = ptr;
        ptr = ptr->right;
    }
    return max;
    
}

Node* BST::successor(int data) {
    
    Node* ptr = search(data);
    
    if(data == ptr->data) {
        if(ptr->right) {
            return (minimum(ptr->right));
        }
        else {
            Node* parent_node = ptr->parent;
            while((parent_node != NULL) && (ptr != ptr->parent->left)) {
                ptr = parent_node;
                parent_node = ptr->parent;
            }
            return (parent_node);
        }
    }
}

void BST::replace_node(Node* a, Node* b) {
    
    if((a == NULL) || (a->parent == NULL)) {
        root = b;
    }
    else if(a == a->parent->left) {
        a->parent->left = b;
    }
    else {
        a->parent->right = b;
    }
        
    if(b) {
        b->parent = a->parent;
    }
}

void BST::delete_node(int data) {
    Node* ptr = search(data);
    
    if(ptr){
        if(ptr->left == NULL) {
            replace_node(ptr, ptr->right);
        }
        else if(ptr->right == NULL) {
            replace_node(ptr, ptr->left);
        }
        else {
            Node* min = minimum(ptr->right);
            if(min->parent != ptr) {
                replace_node(min, min->right);
                min->right = ptr->right;
                ptr->right->parent = min;
            }
            replace_node(ptr, min);
            min->left = ptr->left;
            min->left->parent = min;
        }
    }
}