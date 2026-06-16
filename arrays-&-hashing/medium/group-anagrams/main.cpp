//
// Created by vincenn lin on 2026/6/16.
//
/*
*Group Anagrams
Medium
Topics
Company Tags

Hints
Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: strs = ["act","pots","tops","cat","stop","hat"]

Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
Example 2:

Input: strs = ["x"]

Output: [["x"]]
Example 3:

Input: strs = [""]

Output: [[""]]
Constraints:

1 <= strs.length <= 1000.
0 <= strs[i].length <= 100
strs[i] is made up of lowercase English letters.
    */

#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<std::string> strs_ex1 = {"act", "pots", "tops", "cat", "stop", "hat"};
    std::vector<std::vector<std::string>> output_ex1 = solution.groupAnagrams(strs_ex1);
    std::cout << "Input: strs = [\"act\", \"pots\", \"tops\", \"cat\", \"stop\", \"hat\"]" << std::endl;
    std::cout << "Expected Output: [[\"hat\"], [\"act\", \"cat\"], [\"stop\", \"pots\", \"tops\"]]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex1.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < output_ex1[i].size(); ++j) {
            std::cout << "\"" << output_ex1[i][j] << "\"";
            if (j < output_ex1[i].size() - 1) std::cout << ", ";
        }
        std::cout << "]";
        if (i < output_ex1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<std::string> strs_ex2 = {"x"};
    std::vector<std::vector<std::string>> output_ex2 = solution.groupAnagrams(strs_ex2);
    std::cout << "Input: strs = [\"x\"]" << std::endl;
    std::cout << "Expected Output: [[\"x\"]]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex2.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < output_ex2[i].size(); ++j) {
            std::cout << "\"" << output_ex2[i][j] << "\"";
            if (j < output_ex2[i].size() - 1) std::cout << ", ";
        }
        std::cout << "]";
        if (i < output_ex2.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << "\n[Example 3]" << std::endl;
    std::vector<std::string> strs_ex3 = {""};
    std::vector<std::vector<std::string>> output_ex3 = solution.groupAnagrams(strs_ex3);
    std::cout << "Input: strs = [\"\"]" << std::endl;
    std::cout << "Expected Output: [[\"\"]]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < output_ex3.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < output_ex3[i].size(); ++j) {
            std::cout << "\"" << output_ex3[i][j] << "\"";
            if (j < output_ex3[i].size() - 1) std::cout << ", ";
        }
        std::cout << "]";
        if (i < output_ex3.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}