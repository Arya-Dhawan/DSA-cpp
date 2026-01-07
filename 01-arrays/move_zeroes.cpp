/*
Problem: Move Zeroes
Platform: LeetCode
Difficulty: Easy
Pattern: Loop Traversal and Swap

Approach:
1. Keep an index j to track the position of the last non-zero element.
2. Traverse the array with index i.
3. Whenever a non-zero element is found at index i, swap it with the element at index j and increment j.

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(), j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};