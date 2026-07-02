//
// Created by vincenn lin on 2026/7/2.
//
/*
*Same Binary Tree
Easy
Topics
Company Tags

Hints
Given the roots of two binary trees p and q, return true if the trees are equivalent, otherwise return false.

Two binary trees are considered equivalent if they share the exact same structure and the nodes have the same values.

Example 1:



Input: p = [1,2,3], q = [1,2,3]

Output: true
Example 2:



Input: p = [4,7], q = [4,null,7]

Output: false
Example 3:



Input: p = [1,2,3], q = [1,3,2]

Output: false
Constraints:

0 <= The number of nodes in both trees <= 100.
-100 <= Node.val <= 100

*/
#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    TreeNode* p_ex1 = new TreeNode(1);
    p_ex1->left = new TreeNode(2);
    p_ex1->right = new TreeNode(3);

    TreeNode* q_ex1 = new TreeNode(1);
    q_ex1->left = new TreeNode(2);
    q_ex1->right = new TreeNode(3);

    bool output_ex1 = solution.isSameTree(p_ex1, q_ex1);
    std::cout << "Input: p = [1,2,3], q = [1,2,3]" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    TreeNode* p_ex2 = new TreeNode(4);
    p_ex2->left = new TreeNode(7);

    TreeNode* q_ex2 = new TreeNode(4);
    q_ex2->right = new TreeNode(7);

    bool output_ex2 = solution.isSameTree(p_ex2, q_ex2);
    std::cout << "Input: p = [4,7], q = [4,null,7]" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    return 0;
}