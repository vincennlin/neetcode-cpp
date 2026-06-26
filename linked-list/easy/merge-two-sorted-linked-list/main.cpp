//
// Created by vincenn lin on 2026/6/26.
//
/*
*Merge Two Sorted Linked Lists
Easy
Topics
Company Tags

Hints
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted linked list and return the head of the new sorted linked list.

The new list should be made up of nodes from list1 and list2.

Example 1:



Input: list1 = [1,2,4], list2 = [1,3,5]

Output: [1,1,2,3,4,5]
Example 2:

Input: list1 = [], list2 = [1,2]

Output: [1,2]
Example 3:

Input: list1 = [], list2 = []

Output: []
Constraints:

0 <= The length of the each list <= 100.
-100 <= Node.val <= 100
*/

#include <iostream>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    ListNode* list1_ex1 = new ListNode(1);
    list1_ex1->next = new ListNode(2);
    list1_ex1->next->next = new ListNode(4);

    ListNode* list2_ex1 = new ListNode(1);
    list2_ex1->next = new ListNode(3);
    list2_ex1->next->next = new ListNode(5);

    ListNode* output_ex1 = solution.mergeTwoLists(list1_ex1, list2_ex1);
    std::cout << "Input: list1 = [1, 2, 4], list2 = [1, 3, 5]" << std::endl;
    std::cout << "Expected Output: [1, 1, 2, 3, 4, 5]" << std::endl;
    std::cout << "Your Output: [";
    while (output_ex1) {
        std::cout << output_ex1->val;
        output_ex1 = output_ex1->next;
        if (output_ex1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    // INPUT
    // list1=[]
    // list2=[1,2]

    std::cout << "\n[Example 2]" << std::endl;
    ListNode* list1_ex2 = nullptr;
    ListNode* list2_ex2 = new ListNode(1);
    list2_ex2->next = new ListNode(2);

    ListNode* output_ex2 = solution.mergeTwoLists(list1_ex2, list2_ex2);
    std::cout << "Input: list1 = [], list2 = [1, 2]" << std::endl;
    std::cout << "Expected Output: [1, 2]" << std::endl;
    std::cout << "Your Output: [";
    while (output_ex2) {
        std::cout << output_ex2->val;
        output_ex2 = output_ex2->next;
        if (output_ex2) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}