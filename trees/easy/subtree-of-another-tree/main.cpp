//
// Created by vincenn lin on 2026/7/2.
//
/*
*Subtree of Another Tree
Easy
Topics
Company Tags

Hints
Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

Example 1:



Input: root = [1,2,3,4,5], subRoot = [2,4,5]

Output: true
Example 2:



Input: root = [1,2,3,4,5,null,null,6], subRoot = [2,4,5]

Output: false
Constraints:

1 <= The number of nodes in both trees <= 100.
-100 <= root.val, subRoot.val <= 100
*/
#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    TreeNode* root_ex1 = new TreeNode(1);
    root_ex1->left = new TreeNode(2);
    root_ex1->right = new TreeNode(3);
    root_ex1->left->left = new TreeNode(4);
    root_ex1->left->right = new TreeNode(5);

    TreeNode* subRoot_ex1 = new TreeNode(2);
    subRoot_ex1->left = new TreeNode(4);
    subRoot_ex1->right = new TreeNode(5);

    bool output_ex1 = solution.isSubtree(root_ex1, subRoot_ex1);
    std::cout << "Input: root = [1,2,3,4,5], subRoot = [2,4,5]" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    TreeNode* root_ex2 = new TreeNode(1);
    root_ex2->left = new TreeNode(2);
    root_ex2->right = new TreeNode(3);
    root_ex2->left->left = new TreeNode(4);
    root_ex2->left->right = new TreeNode(5);
    root_ex2->left->left->left = new TreeNode(6);

    TreeNode* subRoot_ex2 = new TreeNode(2);
    subRoot_ex2->left = new TreeNode(4);
    subRoot_ex2->right = new TreeNode(5);

    bool output_ex2 = solution.isSubtree(root_ex2, subRoot_ex2);
    std::cout << "Input: root = [1,2,3,4,5,null,null,6], subRoot = [2,4,5]" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    return 0;
}