//
// Created by vincenn lin on 2026/6/26.
//
/*
*Linked List Cycle Detection
Easy
Topics
Company Tags

Hints
Given the beginning of a linked list head, return true if there is a cycle in the linked list. Otherwise, return false.

There is a cycle in a linked list if at least one node in the list can be visited again by following the next pointer.

Internally, index determines the index of the beginning of the cycle, if it exists. The tail node of the list will set it's next pointer to the index-th node. If index = -1, then the tail node points to null and no cycle exists.

Note: index is not given to you as a parameter.

Example 1:



Input: head = [1,2,3,4], index = 1

Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:



Input: head = [1,2], index = -1

Output: false
Constraints:

0 <= Length of the list <= 1000.
-1000 <= Node.val <= 1000
index is -1 or a valid index in the linked list.
*/

#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    ListNode* head_ex1 = new ListNode(1);
    head_ex1->next = new ListNode(2);
    head_ex1->next->next = new ListNode(3);
    head_ex1->next->next->next = new ListNode(4);
    head_ex1->next->next->next->next = head_ex1->next; // Create a cycle

    bool output_ex1 = solution.hasCycle(head_ex1);
    std::cout << "Input: head = [1, 2, 3, 4], index = 1" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    ListNode* head_ex2 = new ListNode(1);
    head_ex2->next = new ListNode(2);

    bool output_ex2 = solution.hasCycle(head_ex2);
    std::cout << "Input: head = [1, 2], index = -1" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    return 0;
}