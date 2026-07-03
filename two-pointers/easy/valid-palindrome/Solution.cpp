//
// Created by vincenn lin on 2026/7/3.
//
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() <= 1) return true;

        int left = 0, right = s.size() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            if (left < right && tolower(s[left] ) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
