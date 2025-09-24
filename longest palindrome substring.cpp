#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Helper function to expand from the center and return longest palindrome
    string expandFromCenter(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        // after loop ends, left and right are one step beyond the valid palindrome
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        if (s.size() < 2) return s;

        string longest = "";
        for (int i = 0; i < s.size(); i++) {
            // Odd length palindrome
            string odd = expandFromCenter(s, i, i);
            if (odd.size() > longest.size()) {
                longest = odd;
            }

            // Even length palindrome
            string even = expandFromCenter(s, i, i + 1);
            if (even.size() > longest.size()) {
                longest = even;
            }
        }
        return longest;
    }
};