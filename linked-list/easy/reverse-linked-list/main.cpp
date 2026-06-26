//
// Created by vincenn lin on 2026/6/26.
//
/*
*Reverse Linked List
Easy
Topics
Company Tags

Hints
Given the beginning of a singly linked list head, reverse the list, and return the new beginning of the list.

Example 1:

Input: head = [0,1,2,3]

Output: [3,2,1,0]
Example 2:

Input: head = []

Output: []
Constraints:

0 <= The length of the list <= 1000.
-1000 <= Node.val <= 1000

*/

#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    ListNode* head_ex1 = new ListNode(0);
    head_ex1->next = new ListNode(1);
    head_ex1->next->next = new ListNode(2);
    head_ex1->next->next->next = new ListNode(3);

    ListNode* output_ex1 = solution.reverseList(head_ex1);
    std::cout << "Input: head = [0, 1, 2, 3]" << std::endl;
    std::cout << "Expected Output: [3, 2, 1, 0]" << std::endl;
    std::cout << "Your Output: [";
    while (output_ex1) {
        std::cout << output_ex1->val;
        output_ex1 = output_ex1->next;
        if (output_ex1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}