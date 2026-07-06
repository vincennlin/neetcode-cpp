//
// Created by vincenn lin on 2026/7/6.
//
/*
*Subsets
Medium
Topics
Company Tags

Hints
Given an array nums of unique integers, return all possible subsets of nums.

The solution set must not contain duplicate subsets. You may return the solution in any order.

Example 1:

Input: nums = [1,2,3]

Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [7]

Output: [[],[7]]
Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
*/

#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> nums_ex1 = {1, 2, 3};
    std::vector<std::vector<int>> output_ex1 = solution.subsets(nums_ex1);
    std::cout << "Input: nums = [1, 2, 3]" << std::endl;
    std::cout << "Expected Output: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]" << std::endl;
    std::cout << "Your Output: [";
    for (const auto& subset : output_ex1) {
        std::cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            std::cout << subset[i];
            if (i < subset.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]";
        if (&subset != &output_ex1.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}