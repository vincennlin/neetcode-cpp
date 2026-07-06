//
// Created by vincenn lin on 2026/7/6.
//
/*
*Number of Islands
Medium
Topics
Company Tags

Hints
Given a 2D grid grid where '1' represents land and '0' represents water, count and return the number of islands.

An island is formed by connecting adjacent lands horizontally or vertically and is surrounded by water. You may assume water is surrounding the grid (i.e., all the edges are water).

Example 1:

Input: grid = [
["0","1","1","1","0"],
["0","1","0","1","0"],
["1","1","0","0","0"],
["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
["1","1","0","0","1"],
["1","1","0","0","1"],
["0","0","1","0","0"],
["0","0","0","1","1"]
]
Output: 4
Constraints:

1 <= grid.length, grid[i].length <= 100
grid[i][j] is '0' or '1'.
*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<std::vector<char>> grid_ex1 = {
        {'0', '1', '1', '1', '0'},
        {'0', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}
    };
    int output_ex1 = solution.numIslands(grid_ex1);
    std::cout << "Input: grid = [[\"0\",\"1\",\"1\",\"1\",\"0\"],[\"0\",\"1\",\"0\",\"1\",\"0\"],[\"1\",\"1\",\"0\",\"0\",\"0\"],[\"0\",\"0\",\"0\",\"0\",\"0\"]]" << std::endl;
    std::cout << "Expected Output: 1" << std::endl;
    std::cout << "Your Output: " << output_ex1 << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<std::vector<char>> grid_ex2 = {
        {'1', '1', '0', '0', '1'},
        {'1', '1', '0', '0', '1'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };
    int output_ex2 = solution.numIslands(grid_ex2);
    std::cout << "Input: grid = [[\"1\",\"1\",\"0\",\"0\",\"1\"],[\"1\",\"1\",\"0\",\"0\",\"1\"],[\"0\",\"0\",\"1\",\"0\",\"0\"],[\"0\",\"0\",\"0\",\"1\",\"1\"]]" << std::endl;
    std::cout << "Expected Output: 4" << std::endl;
    std::cout << "Your Output: " << output_ex2 << std::endl;

    return 0;
}