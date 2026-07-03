//
// Created by vincenn lin on 2026/7/3.
//
/*
*Binary Search
Easy
Topics
Company Tags

Hints
You are given an array of distinct integers nums, sorted in ascending order, and an integer target.

Implement a function to search for target within nums. If it exists, then return its index, otherwise, return -1.

Your solution must run in
O
(
l
o
g
n
)
O(logn) time.

Example 1:

Input: nums = [-1,0,2,4,6,8], target = 4

Output: 3
Example 2:

Input: nums = [-1,0,2,4,6,8], target = 3

Output: -1
Constraints:

1 <= nums.length <= 10000.
-10000 < nums[i], target < 10000
All the integers in nums are unique.

*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> nums_ex1 = {-1, 0, 2, 4, 6, 8};
    int target_ex1 = 4;
    int output_ex1 = solution.search(nums_ex1, target_ex1);
    std::cout << "Input: nums = [-1, 0, 2, 4, 6, 8], target = 4" << std::endl;
    std::cout << "Expected Output: 3" << std::endl;
    std::cout << "Your Output: " << output_ex1 << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<int> nums_ex2 = {-1, 0, 2, 4, 6, 8};
    int target_ex2 = 3;
    int output_ex2 = solution.search(nums_ex2, target_ex2);
    std::cout << "Input: nums = [-1, 0, 2, 4, 6, 8], target = 3" << std::endl;
    std::cout << "Expected Output: -1" << std::endl;
    std::cout << "Your Output: " << output_ex2 << std::endl;

    return 0;
}