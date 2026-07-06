//
// Created by vincenn lin on 2026/7/6.
//
/*
*3Sum
Medium
Topics
Company Tags

Hints
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] where nums[i] + nums[j] + nums[k] == 0, and the indices i, j and k are all distinct.

The output should not contain any duplicate triplets. You may return the output and the triplets in any order.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]

Output: [[-1,-1,2],[-1,0,1]]
Explanation:
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].

Example 2:

Input: nums = [0,1,1]

Output: []
Explanation: The only possible triplet does not sum up to 0.

Example 3:

Input: nums = [0,0,0]

Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

Constraints:

3 <= nums.length <= 1000
-10^5 <= nums[i] <= 10^5
*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> nums_ex1 = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> output_ex1 = solution.threeSum(nums_ex1);
    std::cout << "Input: nums = [-1, 0, 1, 2, -1, -4]" << std::endl;
    std::cout << "Expected Output: [[-1,-1,2],[-1,0,1]]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex1.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < output_ex1[i].size(); ++j) {
            std::cout << output_ex1[i][j];
            if (j < output_ex1[i].size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << "]";
        if (i < output_ex1.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}