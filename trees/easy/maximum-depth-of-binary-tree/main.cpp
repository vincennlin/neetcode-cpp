//
// Created by vincenn lin on 2026/6/26.
//
/*
*Maximum Depth of Binary Tree
Easy
Topics
Company Tags

Hints
Given the root of a binary tree, return its depth.

The depth of a binary tree is defined as the number of nodes along the longest path from the root node down to the farthest leaf node.

Example 1:



Input: root = [1,2,3,null,null,4]

Output: 3
Example 2:

Input: root = []

Output: 0
Constraints:

0 <= The number of nodes in the tree <= 100.
-100 <= Node.val <= 100

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
    int output_ex1 = solution.maxDepth(root_ex1);
    std::cout << "Input: root = [1,2,3,null,null,4]" << std::endl;
    std::cout << "Expected Output: 3" << std::endl;
    std::cout << "Your Output: " << output_ex1 << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    TreeNode* root_ex2 = nullptr;
    int output_ex2 = solution.maxDepth(root_ex2);
    std::cout << "Input: root = []" << std::endl;
    std::cout << "Expected Output: 0" << std::endl;
    std::cout << "Your Output: " << output_ex2 << std::endl;

    return 0;
}
