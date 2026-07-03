//
// Created by vincenn lin on 2026/7/3.
//
/*Valid Parentheses
Easy
Topics
Company Tags

Hints
You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:

Every open bracket is closed by the same type of close bracket.
Open brackets are closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
Return true if s is a valid string, and false otherwise.

Example 1:

Input: s = "[]"

Output: true
Example 2:

Input: s = "([{}])"

Output: true
Example 3:

Input: s = "[(])"

Output: false
Explanation: The brackets are not closed in the correct order.

Constraints:

1 <= s.length <= 1000
*/

#include <iostream>
#include <string>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::string s_ex1 = "[]";
    bool output_ex1 = solution.isValid(s_ex1);
    std::cout << "Input: s = \"[]\"" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex1 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::string s_ex2 = "([{}])";
    bool output_ex2 = solution.isValid(s_ex2);
    std::cout << "Input: s = \"([{}])\"" << std::endl;
    std::cout << "Expected Output: true" << std::endl;
    std::cout << "Your Output: " << (output_ex2 ? "true" : "false") << std::endl;

    std::cout << "\n[Example 3]" << std::endl;
    std::string s_ex3 = "[(])";
    bool output_ex3 = solution.isValid(s_ex3);
    std::cout << "Input: s = \"[(])\"" << std::endl;
    std::cout << "Expected Output: false" << std::endl;
    std::cout << "Your Output: " << (output_ex3 ? "true" : "false") << std::endl;

    return 0;
}
