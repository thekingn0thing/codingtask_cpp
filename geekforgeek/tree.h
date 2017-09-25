//
// Created by Arthur Zagretdinov on 23/09/2017.
//
#include <iostream>

#ifndef CODINGTASKS_TREE_H
#define CODINGTASKS_TREE_H

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* parse_string_to_tree(string* tree);

void print_tree(Node *pNode);

#endif //CODINGTASKS_TREE_H
