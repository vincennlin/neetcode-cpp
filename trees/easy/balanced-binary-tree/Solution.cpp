//
// Created by vincenn lin on 2026/6/26.
//

#include "TreeNode.cpp"
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isBalancedTree;

    bool isBalanced(TreeNode* root) {
        isBalancedTree = true;
        maxDepth(root);
        return isBalancedTree;
    }

    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        if (!isBalancedTree) {
            return 0;
        }

        if (abs(leftDepth - rightDepth) > 1) {
            isBalancedTree = false;
            return 0;
        }

        return max(leftDepth, rightDepth) + 1;
    }
};
