//
// Created by vincenn lin on 2026/7/6.
//
/*
*Container With Most Water
Medium
Topics
Company Tags

Hints
You are given an integer array heights where heights[i] represents the height of the
i
t
h
i
th
bar.

You may choose any two bars to form a container. Return the maximum amount of water a container can store.

Example 1:



Input: height = [1,7,2,5,4,7,3,6]

Output: 36
Example 2:

Input: height = [2,2,2]

Output: 4
Constraints:

2 <= height.length <= 1000
0 <= height[i] <= 1000
*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> heights_ex1 = {1, 7, 2, 5, 4, 7, 3, 6};
    int output_ex1 = solution.maxArea(heights_ex1);
    std::cout << "Input: height = [1, 7, 2, 5, 4, 7, 3, 6]" << std::endl;
    std::cout << "Expected Output: 36" << std::endl;
    std::cout << "Your Output: " << output_ex1 << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<int> heights_ex2 = {2, 2, 2};
    int output_ex2 = solution.maxArea(heights_ex2);
    std::cout << "Input: height = [2, 2, 2]" << std::endl;
    std::cout << "Expected Output: 4" << std::endl;
    std::cout << "Your Output: " << output_ex2 << std::endl;

    return 0;
}