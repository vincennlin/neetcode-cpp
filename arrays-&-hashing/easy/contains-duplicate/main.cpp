//
// Created by vincenn lin on 2026/6/16.
//
/*
*Contains Duplicate
Easy
Topics
Company Tags

Hints
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

Input: nums = [1, 2, 3, 3]

Output: true

Example 2:

Input: nums = [1, 2, 3, 4]

Output: false
Constraints:

0 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
*/

#include <iostream>
#include <vector>
#include "Solution.cpp"

int main () {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    vector<int> nums_ex1 = {1, 2, 3, 3};
    bool output_ex1 = solution.hasDuplicate(nums_ex1);
    std::cout << "Input: nums = [1, 2, 3, 3]" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    vector<int> nums_ex2 = {1, 2, 3, 4};
    bool output_ex2 = solution.hasDuplicate(nums_ex2);
    std::cout << "Input: nums = [1, 2, 3, 4]" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    return 0;
}
