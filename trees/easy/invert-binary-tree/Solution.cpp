//
// Created by vincenn lin on 2026/6/26.
//

#include "TreeNode.cpp"

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;

        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;

        return root;
    }
};
