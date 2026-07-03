//
// Created by vincenn lin on 2026/7/3.
//
/*
*Valid Palindrome
Easy
Topics
Company Tags

Hints
Given a string s, return true if it is a palindrome, otherwise return false.

A palindrome is a string that reads the same forward and backward. It is also case-insensitive and ignores all non-alphanumeric characters.

Note: Alphanumeric characters consist of letters (A-Z, a-z) and numbers (0-9).

Example 1:

Input: s = "Was it a car or a cat I saw?"

Output: true
Explanation: After considering only alphanumerical characters we have "wasitacaroracatisaw", which is a palindrome.

Example 2:

Input: s = "tab a cat"

Output: false
Explanation: "tabacat" is not a palindrome.

Constraints:

1 <= s.length <= 1000
s is made up of only printable ASCII characters.
*/
#include <iostream>
#include <string>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::string s_ex1 = "Was it a car or a cat I saw?";
    bool output_ex1 = solution.isPalindrome(s_ex1);
    std::cout << "Input: s = \"Was it a car or a cat I saw?\"" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::string s_ex2 = "tab a cat";
    bool output_ex2 = solution.isPalindrome(s_ex2);
    std::cout << "Input: s = \"tab a cat\"" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    return 0;
}