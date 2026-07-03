//
// Created by vincenn lin on 2026/7/3.
//
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int lowest = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            profit = max(profit, prices[i] - lowest);
            lowest = min(lowest, prices[i]);
        }

        return profit;
    }
};
