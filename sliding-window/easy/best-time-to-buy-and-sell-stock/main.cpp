//
// Created by vincenn lin on 2026/7/3.
//
/*
*Best Time to Buy and Sell Stock
Easy
Topics
Company Tags

Hints
You are given an integer array prices where prices[i] is the price of NeetCoin on the ith day.

You may choose a single day to buy one NeetCoin and choose a different day in the future to sell it.

Return the maximum profit you can achieve. You may choose to not make any transactions, in which case the profit would be 0.

Example 1:

Input: prices = [10,1,5,6,7,1]

Output: 6
Explanation: Buy prices[1] and sell prices[4], profit = 7 - 1 = 6.

Example 2:

Input: prices = [10,8,7,5,2]

Output: 0
Explanation: No profitable transactions can be made, thus the max profit is 0.

Constraints:

1 <= prices.length <= 100
0 <= prices[i] <= 100
*/
#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<int> prices_ex1 = {10, 1, 5, 6, 7, 1};
    int output_ex1 = solution.maxProfit(prices_ex1);
    std::cout << "Input: prices = [10, 1, 5, 6, 7, 1]" << std::endl;
    std::cout << "Expected Output: 6" << std::endl;
    std::cout << "Your Output: " << output_ex1 << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<int> prices_ex2 = {10, 8, 7, 5, 2};
    int output_ex2 = solution.maxProfit(prices_ex2);
    std::cout << "Input: prices = [10, 8, 7, 5, 2]" << std::endl;
    std::cout << "Expected Output: 0" << std::endl;
    std::cout << "Your Output: " << output_ex2 << std::endl;

    // INPUT prices=[5,1,5,6,7,1,10]
    std::cout << "\n[Custom Example]" << std::endl;
    std::vector<int> prices_custom = {5, 1, 5, 6, 7, 1, 10};
    int output_custom = solution.maxProfit(prices_custom);
    std::cout << "Input: prices = [5, 1, 5, 6, 7, 1, 10]" << std::endl;
    std::cout << "Expected Output: 9" << std::endl;
    std::cout << "Your Output: " << output_custom << std::endl;

    return 0;
}