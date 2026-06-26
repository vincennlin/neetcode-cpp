//
// Created by vincenn lin on 2026/6/26.
//
/*
*Invert Binary Tree
Easy
Topics
Company Tags

Hints
You are given the root of a binary tree root. Invert the binary tree and return its root.

Example 1:



Input: root = [1,2,3,4,5,6,7]

Output: [1,3,2,7,6,5,4]
Example 2:



Input: root = [3,2,1]

Output: [3,1,2]
Example 3:

Input: root = []

Output: []
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
    root_ex1->left->left = new TreeNode(4);
    root_ex1->left->right = new TreeNode(5);
    root_ex1->right->left = new TreeNode(6);
    root_ex1->right->right = new TreeNode(7);

    TreeNode* output_ex1 = solution.invertTree(root_ex1);
    std::cout << "Input: root = [1, 2, 3, 4, 5, 6, 7]" << std::endl;
    std::cout << "Expected Output: [1, 3, 2, 7, 6, 5, 4]" << std::endl;
    std::cout << "Your Output: [";
    // Function to print the tree in level order can be implemented here
    std::cout << "]" << std::endl;

    return 0;
}