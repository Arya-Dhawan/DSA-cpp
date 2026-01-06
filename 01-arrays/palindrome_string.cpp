/*
Problem: Palindrome String
Platform: LeetCode
Difficulty: Easy
Pattern: Two Pointers

Approach:
1. Maintain two pointers at start and end
2. Compare characters at both pointers
3. If characters don't match, return false
4. Move pointers towards each other
5. Continue until pointers meet
6. If all characters match, return true

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool palindromeString(string s) {
        int start = 0;
        int end = s.size() - 1;
        while(start < end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

