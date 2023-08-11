#include "../test/catch.hpp"
#include "balanced_binary_tree.h"

using namespace std;

TEST_CASE( "Null pointer is balanced tree", "[bst-basic]" ) {

    BalancedSearchTreeSolution objectUnderTest;
    
    const bool balanced = objectUnderTest.isBalanced(nullptr);
    
    REQUIRE(balanced);
}

TEST_CASE( "One element tree is balanced", "[bst-basic]" ) {
    
    BalancedSearchTreeSolution objectUnderTest;
    
    auto *root = new TreeNode(0);
    const bool balanced = objectUnderTest.isBalanced(root);
    
    REQUIRE(balanced);
}

TEST_CASE( "Tree with one left and one right is balanced.", "[bst-basic]" ) {
    
    BalancedSearchTreeSolution objectUnderTest;
    
    auto root = new TreeNode(10);
    
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    
    const bool balanced = objectUnderTest.isBalanced(root);
    
    REQUIRE(balanced);
}

TEST_CASE( "Tree with screw one left is not balanced.", "[bst-basic][negative]" ) {
    BalancedSearchTreeSolution objectUnderTest;
    
    auto root = new TreeNode(10);
    
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(15);
    
    const bool balanced = objectUnderTest.isBalanced(root);
    
    REQUIRE_FALSE(balanced);
}

TEST_CASE( "Tree with screw on second level left is not balanced.", "[bst-basic][negative]" ) {
    BalancedSearchTreeSolution objectUnderTest;
    
    auto root = new TreeNode(10);
    
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(15);
    root->left->left->left = new TreeNode(15);
    
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(15);
    root->right->right->right = new TreeNode(15);
    
    const bool balanced = objectUnderTest.isBalanced(root);
    
    REQUIRE_FALSE(balanced);
}