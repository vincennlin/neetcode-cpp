//
// Created by vincenn lin on 2026/6/19.
//
/*
*Encode and Decode Strings
Medium
Topics
Company Tags

Hints
Design an algorithm to encode a list of strings to a string. The encoded string is then sent over the network and is decoded back to the original list of strings.

Machine 1 (sender) has the function:

String encode(List<String> strs) {
// ... your code
return encoded_string;
}
Machine 2 (receiver) has the function:

List<String> decode(String encoded_string) {
// ... your code
return decoded_strs;
}
So Machine 1 does:

String encoded_string = encode(strs);
and Machine 2 does:

List<String> decoded_strs = decode(encoded_string);
decoded_strs in Machine 2 should be the same as the input strs in Machine 1.

Implement the encode and decode methods.

Example 1:

Input: strs = ["Hello","World"]

Output: ["Hello","World"]
Explanation:

Solution solution = new Solution();
String encoded_string = solution.encode(strs);

// Machine 1 ---encoded_string---> Machine 2

List<String> decoded_strs = solution.decode(encoded_string);

Example 2:

Input: strs = [""]

Output: [""]

Constraints:

0 <= strs.length < 100
0 <= strs[i].length < 200
strs[i] contains any possible characters out of 256 valid ASCII characters.

Follow up: Could you write a generalized algorithm to work on any possible set of characters?
*/

#include <iostream>
#include <vector>
#include "Solution.cpp"

int main() {
    Solution solution;

    std::cout << "\n[Example 1]" << std::endl;
    std::vector<std::string> strs_ex1 = {"Hello", "World"};
    std::string encoded_ex1 = solution.encode(strs_ex1);
    std::vector<std::string> decoded_ex1 = solution.decode(encoded_ex1);
    std::cout << "Input: strs = [\"Hello\", \"World\"]" << std::endl;
    std::cout << "Expected Output: [\"Hello\", \"World\"]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < decoded_ex1.size(); ++i) {
        std::cout << "\"" << decoded_ex1[i] << "\"";
        if (i < decoded_ex1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << "\n[Example 2]" << std::endl;
    std::vector<std::string> strs_ex2 = {""};
    std::string encoded_ex2 = solution.encode(strs_ex2);
    std::vector<std::string> decoded_ex2 = solution.decode(encoded_ex2);
    std::cout << "Input: strs = [\"\"]" << std::endl;
    std::cout << "Expected Output: [\"\"]" << std::endl;
    std::cout << "Your Output: [";
    for (size_t i = 0; i < decoded_ex2.size(); ++i) {
        std::cout << "\"" << decoded_ex2[i] << "\"";
        if (i < decoded_ex2.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}