//
// Created by vincenn lin on 2026/7/6.
//
/*
*Reorder Linked List
Medium
Topics
Company Tags

Hints
You are given the head of a singly linked-list.

The positions of a linked list of length = 7 for example, can intially be represented as:

[0, 1, 2, 3, 4, 5, 6]

Reorder the nodes of the linked list to be in the following order:

[0, 6, 1, 5, 2, 4, 3]

Notice that in the general case for a list of length = n the nodes are reordered to be in the following order:

[0, n-1, 1, n-2, 2, n-3, ...]

You may not modify the values in the list's nodes, but instead you must reorder the nodes themselves.

Example 1:

Input: head = [2,4,6,8]

Output: [2,8,4,6]
Example 2:

Input: head = [2,4,6,8,10]

Output: [2,10,4,8,6]
Constraints:

1 <= Length of the list <= 1000.
1 <= Node.val <= 1000
*/
#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    ListNode* head_ex1 = new ListNode(2);
    head_ex1->next = new ListNode(4);
    head_ex1->next->next = new ListNode(6);
    head_ex1->next->next->next = new ListNode(8);

    std::cout << "Input: head = [2, 4, 6, 8]" << std::endl;
    solution.reorderList(head_ex1);
    std::cout << "Expected Output: [2, 8, 4, 6]" << std::endl;
    std::cout << "Your Output: [";
    ListNode* current = head_ex1;
    while (current) {
        std::cout << current->val;
        if (current->next) {
            std::cout << ", ";
        }
        current = current->next;
    }
    std::cout << "]" << std::endl;

    return 0;
}