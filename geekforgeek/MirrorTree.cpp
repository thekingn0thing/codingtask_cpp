//
// Created by Arthur Zagretdinov on 23/09/2017.
//

#include <queue>
#include "MirrorTree.h"

using namespace std;

void MirrorTree::mirror(Node *node
) {
    if (!node){
        return;
    }
    
    queue<Node*> q;
    
    q.push(node);
    
    while (!q.empty()){
        Node* n = q.front();
        q.pop();
    
        if(n->left) {
            q.push(n->left);
        }
        if(n->right) {
            q.push(n->right);
        }
        
        Node* tmp = n->left;
        n->left = n->right;
        n->right = tmp;
    }
    
    //return newRoot;
}

