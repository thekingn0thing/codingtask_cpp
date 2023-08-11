//
// Created by Arthur Zagretdinov on 01/11/2017.
//

#include <cstdlib>
#include <algorithm>
#include "balanced_binary_tree.h"

int tree_height(TreeNode *pNode) {
    if (!pNode) {
        return 0;
    }
    
    int left = tree_height(pNode->left);
    if (left == -1) {
        return -1;
    }
    
    int right = tree_height(pNode->right);
    if (right == -1) {
        return -1;
    }
    
    if (abs(left - right) > 1) return -1;
    return std::max(left, right) + 1;
}

bool BalancedSearchTreeSolution::isBalanced(TreeNode *root) {
    if (!root) {
        return true;
    }
    return tree_height(root) != -1;
}
