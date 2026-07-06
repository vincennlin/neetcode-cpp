//
// Created by vincenn lin on 2026/7/6.
//
/*
*Remove Nth Node From End of List
Medium
Topics
Company Tags

Hints
Given the head of a linked list and an integer n, remove the nth node from the end of the list and return its head.

Example 1:

Input: head = [1,2,3,4], n = 2

Output: [1,2,4]
Example 2:

Input: head = [5], n = 1

Output: []
Example 3:

Input: head = [1,2], n = 2

Output: [2]
Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
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
    int n_ex1 = 2;

    ListNode* output_ex1 = solution.removeNthFromEnd(head_ex1, n_ex1);
    std::cout << "Input: head = [1, 2, 3, 4], n = 2" << std::endl;
    std::cout << "Expected Output: [1, 2, 4]" << std::endl;
    std::cout << "Your Output: [";
    while (output_ex1) {
        std::cout << output_ex1->val;
        output_ex1 = output_ex1->next;
        if (output_ex1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}