//
// Created by vincenn lin on 2026/7/2.
//

#include "TreeNode.cpp"

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;

        if (p != nullptr && q != nullptr) {
            return p->val == q->val
            && isSameTree(p->left, q->left)
            && isSameTree(p->right, q->right);
        }

        return false;
    }
};
