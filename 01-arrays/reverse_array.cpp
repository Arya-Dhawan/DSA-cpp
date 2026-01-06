/*
Problem: Reverse an Array
Platform: LeetCode
Difficulty: Easy
Pattern: Two Pointers

Approach:
1. Maintain two pointers at start and end
2. Swap elements at both pointers
3. Move pointers towards each other
4. Continue until pointers meet

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        while(start < end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};

