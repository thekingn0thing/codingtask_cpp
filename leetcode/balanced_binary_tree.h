//
// Created by Arthur Zagretdinov on 01/11/2017.
//

#ifndef CODINGTASKS_BALANCED_BINARY_TREE_H
#define CODINGTASKS_BALANCED_BINARY_TREE_H

#include <cstdio>

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BalancedSearchTreeSolution {
public:
    bool isBalanced(TreeNode* root);
};


#endif //CODINGTASKS_BALANCED_BINARY_TREE_H
