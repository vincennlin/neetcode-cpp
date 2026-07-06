//
// Created by vincenn lin on 2026/7/6.
//
/*
*Two Integer Sum II
Medium
Topics
Company Tags

Hints
Given an array of integers numbers that is sorted in non-decreasing order.

Return the indices (1-indexed) of two numbers, [index1, index2], such that they add up to a given target number target and index1 < index2. Note that index1 and index2 cannot be equal, therefore you may not use the same element twice.

There will always be exactly one valid solution.

Your solution must use
O
(
1
)
O(1) additional space.

Example 1:

Input: numbers = [1,2,3,4], target = 3

Output: [1,2]
Explanation:
The sum of 1 and 2 is 3. Since we are assuming a 1-indexed array, index1 = 1, index2 = 2. We return [1, 2].

Constraints:

2 <= numbers.length <= 1000
-1000 <= numbers[i] <= 1000
-1000 <= target <= 1000
*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> numbers_ex1 = {1, 2, 3, 4};
    int target_ex1 = 3;
    std::vector<int> output_ex1 = solution.twoSum(numbers_ex1, target_ex1);
    std::cout << "Input: numbers = [1, 2, 3, 4], target = 3" << std::endl;
    std::cout << "Expected Output: [1, 2]" << std::endl;
    std::cout << "Your Output: [" << output_ex1[0] << ", " << output_ex1[1] << "]" << std::endl;

    return 0;
}