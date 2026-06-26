//
// Created by vincenn lin on 2026/6/26.
//

#include "ListNode.cpp"

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr) return false;

        ListNode *slow = head, *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};
