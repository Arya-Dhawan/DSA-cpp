/*
Problem: Single Number
Platform: LeetCode
Difficulty: Easy
Pattern: Bit Manipulation (XOR)

Approach:
1. Initialize a variable with 0 to store the result of XOR operation.
2. XOR all elements in the array with the variable.
3. Since XOR of two identical numbers is 0, the result will be the single number that appears only once.

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};