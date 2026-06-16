//
// Created by vincenn lin on 2026/6/16.
//
/*
*Top K Frequent Elements
Medium
Topics
Company Tags

Hints
Given an integer array nums and an integer k, return the k most frequent elements within the array.

The test cases are generated such that the answer is always unique.

You may return the output in any order.

Example 1:

Input: nums = [1,2,2,3,3,3], k = 2

Output: [2,3]
Example 2:

Input: nums = [7,7], k = 1

Output: [7]
Constraints:

1 <= nums.length <= 10^4.
-1000 <= nums[i] <= 1000
1 <= k <= number of distinct elements in nums.
*/

#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> nums_ex1 = {1, 2, 2, 3, 3, 3};
    int k_ex1 = 2;
    std::vector<int> output_ex1 = solution.topKFrequent(nums_ex1, k_ex1);
    std::cout << "Input: nums = [1, 2, 2, 3, 3, 3], k = 2" << std::endl;
    std::cout << "Expected Output: [2, 3]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex1.size(); ++i) {
        std::cout << output_ex1[i];
        if (i < output_ex1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<int> nums_ex2 = {7, 7};
    int k_ex2 = 1;
    std::vector<int> output_ex2 = solution.topKFrequent(nums_ex2, k_ex2);
    std::cout << "Input: nums = [7, 7], k = 1" << std::endl;
    std::cout << "Expected Output: [7]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex2.size(); ++i) {
        std::cout << output_ex2[i];
        if (i < output_ex2.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}