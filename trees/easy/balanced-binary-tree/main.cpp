//
// Created by vincenn lin on 2026/6/26.
//
/*
*Balanced Binary Tree
Easy
Topics
Company Tags

Hints
Given a binary tree, return true if it is height-balanced and false otherwise.

A height-balanced binary tree is defined as a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

Example 1:



Input: root = [1,2,3,null,null,4]

Output: true
Example 2:



Input: root = [1,2,3,null,null,4,null,5]

Output: false
Example 3:

Input: root = []

Output: true
Constraints:

The number of nodes in the tree is in the range [0, 1000].
-1000 <= Node.val <= 1000
*/
#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    TreeNode* root_ex1 = new TreeNode(1);
    root_ex1->left = new TreeNode(2);
    root_ex1->right = new TreeNode(3);
    root_ex1->right->left = new TreeNode(4);
    int output_ex1 = solution.isBalanced(root_ex1);
    std::cout << "Input: root = [1,2,3,null,null,4]" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    TreeNode* root_ex2 = new TreeNode(1);
    root_ex2->left = new TreeNode(2);
    root_ex2->right = new TreeNode(3);
    root_ex2->right->left = new TreeNode(4);
    root_ex2->right->left->left = new TreeNode(5);
    int output_ex2 = solution.isBalanced(root_ex2);
    std::cout << "Input: root = [1,2,3,null,null,4,null,5]" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    return 0;
}