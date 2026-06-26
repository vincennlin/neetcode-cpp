//
// Created by vincenn lin on 2026/6/26.
//

#include "TreeNode.cpp"
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxDiameter;

    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter = 0;
        maxDepth(root);
        return maxDiameter;
    }

    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        maxDiameter = max(maxDiameter, leftDepth + rightDepth);

        return max(leftDepth, rightDepth) + 1;
    }
};
