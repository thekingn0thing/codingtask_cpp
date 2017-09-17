//
// Created by Arthur Zagretdinov on 22/07/2017.
//

#include "insert_tree.h"

typedef struct node {
    int data;
    node *left;
    node *right;
};

node *new_node(int i) {
    node *root = new node();
    root->data = i;
    return root;
}

node *insert(node *root, int value) {
    if (!root) {
        return new_node(value);
    }
    if (value < root->data) {
        node *node = insert(root->left, value);
        if (!root->left) {
            root->left = node;
        }
    } else {
        node *node = insert(root->right, value);
        if (!root->right) {
            root->right = node;
        }
    }
    
    return root;
}

void print_tree(node *root) {
    if (root) {
        cout << root->data;
        if (root->left || root->right) {
            if (root->left) {
                cout << " L:" << root->left->data;
            } else {
                cout << " L: null";
            }
            if (root->right) {
                cout << " R:" << root->right->data;
            } else {
                cout << " R: null";
            }
        } else{
            cout << ": Leaf";
        }
        
        cout << endl;
        print_tree(root->left);
        print_tree(root->right);
    }
    
}

int insert_bst_main() {
    node *root = insert(nullptr, 10);
    root->left = new_node(5);
    root->right = new_node(15);
    root->right->right = new_node(16);
    
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 14);
    
    print_tree(root);
    return 0;
}
