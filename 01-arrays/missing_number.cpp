/*
Problem: Missing Number
Platform: LeetCode
Difficulty: Easy
Pattern: Sum of First N Natural Numbers

Approach:
1. Calculate the expected sum of first N natural numbers using formula n*(n+1)/2.
2. Calculate the actual sum of elements in the array.
3. Return the difference between expected and actual sums.

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2, arrsum=0;
        
        for(int i=0;i<n;i++){
            arrsum+=nums[i];
        }
        return sum-arrsum;
    }
};