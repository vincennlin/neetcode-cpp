//
// Created by vincenn lin on 2026/7/6.
//
/*
*Permutations
Medium
Topics
Company Tags

Hints
Given an array nums of unique integers, return all the possible permutations. You may return the answer in any order.

Example 1:

Input: nums = [1,2,3]

Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [7]

Output: [[7]]
Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10

*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> nums_ex1 = {1, 2, 3};
    std::vector<std::vector<int>> output_ex1 = solution.permute(nums_ex1);
    std::cout << "Input: nums = [1, 2, 3]" << std::endl;
    std::cout << "Expected Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]" << std::endl;
    std::cout << "Your Output: [";
    for (const auto& permutation : output_ex1) {
        std::cout << "[";
        for (size_t i = 0; i < permutation.size(); ++i) {
            std::cout << permutation[i];
            if (i < permutation.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]";
        if (&permutation != &output_ex1.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}