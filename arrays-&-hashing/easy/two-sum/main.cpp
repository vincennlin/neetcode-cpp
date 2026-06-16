//
// Created by vincenn lin on 2026/6/16.
//
/*
*Two Sum
Easy
Topics
Company Tags

Hints
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

Example 1:

Input:
nums = [3,4,5,6], target = 7

Output: [0,1]
Explanation: nums[0] + nums[1] == 7, so we return [0, 1].

Example 2:

Input: nums = [4,5,6], target = 10

Output: [0,2]
Example 3:

Input: nums = [5,5], target = 10

Output: [0,1]
Constraints:

2 <= nums.length <= 1000
-10,000,000 <= nums[i] <= 10,000,000
-10,000,000 <= target <= 10,000,000
Only one valid answer exists.
*/

#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> nums_ex1 = {3, 4, 5, 6};
    int target_ex1 = 7;
    std::vector<int> output_ex1 = solution.twoSum(nums_ex1, target_ex1);
    std::cout << "Input: nums = [3, 4, 5, 6], target = 7" << std::endl;
    std::cout << "Expected Output: [0, 1]" << std::endl;
    std::cout << "Your Output: [" << output_ex1[0] << ", " << output_ex1[1] << "]" << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<int> nums_ex2 = {4, 5, 6};
    int target_ex2 = 10;
    std::vector<int> output_ex2 = solution.twoSum(nums_ex2, target_ex2);
    std::cout << "Input: nums = [4, 5, 6], target = 10" << std::endl;
    std::cout << "Expected Output: [0, 2]" << std::endl;
    std::cout << "Your Output: [" << output_ex2[0] << ", " << output_ex2[1] << "]" << std::endl;

    std::cout << "\n[Example 3]" << std::endl;
    std::vector<int> nums_ex3 = {5, 5};
    int target_ex3 = 10;
    std::vector<int> output_ex3 = solution.twoSum(nums_ex3, target_ex3);
    std::cout << "Input: nums = [5, 5], target = 10" << std::endl;
    std::cout << "Expected Output: [0, 1]" << std::endl;
    std::cout << "Your Output: [" << output_ex3[0] << ", " << output_ex3[1] << "]" << std::endl;

    return 0;
}