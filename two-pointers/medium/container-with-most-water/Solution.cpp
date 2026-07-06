//
// Created by vincenn lin on 2026/7/6.
//
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int maxWater = 0;

        while (left < right) {
            maxWater = max(maxWater,
                (right - left) * min(heights[left], heights[right]));

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};
