//
// Created by vincenn lin on 2026/6/26.
//
/*
*Diameter of Binary Tree
Easy
Topics
Company Tags

Hints
The diameter of a binary tree is defined as the length of the longest path between any two nodes within the tree. The path does not necessarily have to pass through the root.

The length of a path between two nodes in a binary tree is the number of edges between the nodes. Note that the path can not include the same node twice.

Given the root of a binary tree root, return the diameter of the tree.

Example 1:



Input: root = [1,null,2,3,4,5]

Output: 3
Explanation: 3 is the length of the path [1,2,3,5] or [5,3,2,4].

Example 2:

Input: root = [1,2,3]

Output: 2
Constraints:

1 <= number of nodes in the tree <= 100
-100 <= Node.val <= 100
*/

#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    TreeNode* root_ex1 = new TreeNode(1);
    root_ex1->right = new TreeNode(2);
    root_ex1->right->left = new TreeNode(3);
    root_ex1->right->right = new TreeNode(4);
    root_ex1->right->right->left = new TreeNode(5);
    int output_ex1 = solution.diameterOfBinaryTree(root_ex1);
    std::cout << "Input: root = [1,null,2,3,4,5]" << std::endl;
    std::cout << "Expected Output: 3" << std::endl;
    std::cout << "Your Output: " << output_ex1 << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    TreeNode* root_ex2 = new TreeNode(1);
    root_ex2->left = new TreeNode(2);
    root_ex2->right = new TreeNode(3);
    int output_ex2 = solution.diameterOfBinaryTree(root_ex2);
    std::cout << "Input: root = [1,2,3]" << std::endl;
    std::cout << "Expected Output: 2" << std::endl;
    std::cout << "Your Output: " << output_ex2 << std::endl;

    return 0;
}