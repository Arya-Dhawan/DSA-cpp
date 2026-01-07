/*
Problem: Check if Array is Sorted and Rotated
Platform: LeetCode
Difficulty: Easy
Pattern: Circular Loop Traversal

Approach:
1. Count the number of times an element is greater than the next element
2. If count is more than 1, return false
3. If count is 0, array is sorted and not rotated
4. If count is 1, check if last element is less than or equal to first element

Time: O(n)
Space: O(1)
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int greater=0, n=nums.size();
        if(n==1)
            return true;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                greater++;
                if(greater>1){
                    return false;
                }
            }
        }
        return true;
    }
};