//
// Created by vincenn lin on 2026/6/16.
//
/*
*Valid Anagram
Easy
Topics
Company Tags

Hints
Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: s = "racecar", t = "carrace"

Output: true
Example 2:

Input: s = "jar", t = "jam"

Output: false
Constraints:

1 <= s.length, t.length <= 5 * 10^4
s and t consist of lowercase English letters.
 */

#include <iostream>
#include <string>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::string s_ex1 = "racecar";
    std::string t_ex1 = "carrace";
    bool output_ex1 = solution.isAnagram(s_ex1, t_ex1);
    std::cout << "Input: s = \"racecar\", t = \"carrace\"" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::string s_ex2 = "jar";
    std::string t_ex2 = "jam";
    bool output_ex2 = solution.isAnagram(s_ex2, t_ex2);
    std::cout << "Input: s = \"jar\", t = \"jam\"" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    return 0;
}