//
// Created by vincenn lin on 2026/6/19.
//
/*
*Products of Array Except Self
Medium
Topics
Company Tags

Hints
Given an integer array nums, return an array output where output[i] is the product of all the elements of nums except nums[i].

Each product is guaranteed to fit in a 32-bit integer.

Follow-up: Could you solve it in
O
(
n
)
O(n) time without using the division operation?

Example 1:

Input: nums = [1,2,4,6]

Output: [48,24,12,8]
Example 2:

Input: nums = [-1,0,1,2,3]

Output: [0,-6,0,0,0]
Constraints:

2 <= nums.length <= 1000
-20 <= nums[i] <= 20
*/

#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> nums_ex1 = {1, 2, 4, 6};
    std::vector<int> output_ex1 = solution.productExceptSelf(nums_ex1);
    std::cout << "Input: nums = [1, 2, 4, 6]" << std::endl;
    std::cout << "Expected Output: [48, 24, 12, 8]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex1.size(); ++i) {
        std::cout << output_ex1[i];
        if (i < output_ex1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<int> nums_ex2 = {-1, 0, 1, 2, 3};
    std::vector<int> output_ex2 = solution.productExceptSelf(nums_ex2);
    std::cout << "Input: nums = [-1, 0, 1, 2, 3]" << std::endl;
    std::cout << "Expected Output: [0, -6, 0, 0, 0]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex2.size(); ++i) {
        std::cout << output_ex2[i];
        if (i < output_ex2.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
