//
// Created by vincenn lin on 2026/7/6.
//
/*
*Combination Sum II
Medium
Topics
Company Tags

Hints
You are given an array of integers candidates, which may contain duplicates, and a target integer target. Your task is to return a list of all unique combinations of candidates where the chosen numbers sum to target.

Each element from candidates may be chosen at most once within a combination. The solution set must not contain duplicate combinations.

You may return the combinations in any order and the order of the numbers in each combination can be in any order.

Example 1:

Input: candidates = [9,2,2,4,6,1,5], target = 8

Output: [
[1,2,5],
[2,2,4],
[2,6]
]
Example 2:

Input: candidates = [1,2,3,4,5], target = 7

Output: [
[1,2,4],
[2,5],
[3,4]
]
Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> candidates_ex1 = {9, 2, 2, 4, 6, 1, 5};
    int target_ex1 = 8;
    std::vector<std::vector<int>> output_ex1 = solution.combinationSum2(candidates_ex1, target_ex1);
    std::cout << "Input: candidates = [9, 2, 2, 4, 6, 1, 5], target = 8" << std::endl;
    std::cout << "Expected Output: [[1,2,5],[2,2,4],[2,6]]" << std::endl;
    std::cout << "Your Output: [";
    for (const auto& combination : output_ex1) {
        std::cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            std::cout << combination[i];
            if (i < combination.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]";
        if (&combination != &output_ex1.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}