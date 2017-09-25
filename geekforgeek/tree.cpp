//
// Created by Arthur Zagretdinov on 23/09/2017.
//

#include <iostream>
#include <vector>
#include <sstream>
#include "tree.h"

using namespace std;

Node* createNode(int value) {
    Node* node = new Node;
    node->data = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void addChild(Node *pNode, string &token, Node *child) {
    if (token == "L"){
        pNode->left = child;
    } else{
        pNode->right = child;
    }
}

Node *findNode(Node *root, int value, bool create = true) {
    if(!root){
        if(create) {
            return createNode(value);
        } else{
            return nullptr;
        }
    }
    
    if (root->data == value){
        return root;
    }
    
    Node* left = findNode(root->left, value, false);
    if (left){
        return left;
    }
    
    return findNode(root->right, value, false);
}

Node *parse_string_to_tree(string *tree) {
    if (!tree) {
        return nullptr;
    }
    
    std::istringstream buf(*tree);
    std::istream_iterator<std::string> beg(buf), end;
    
    std::vector<std::string> tokens(beg, end);
    
    Node *root = nullptr;
    Node *parent = nullptr;
    Node *child = nullptr;
    
    for (auto &token: tokens) {
        if (token == "L" || token == "R") {
            addChild(parent, token, child);
            parent = nullptr;
            child = nullptr;
        } else if (!parent) {
            parent = findNode(root, stoi(token));
            if (!root){
                root = parent;
            }
        } else {
            child = createNode(stoi(token));
        }
    }
    
    return root;
}

void print_tree(Node *pNode) {
    if (pNode){
        print_tree(pNode->left);
        cout << pNode->data << " ";
        print_tree(pNode->right);
    }
}
