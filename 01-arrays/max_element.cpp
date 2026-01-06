/*
Problem: Max Element in Array
Platform: LeetCode
Difficulty: Easy
Pattern: Loop Traversal

Approach:
1. Maintain a variable to store maximum element
2. Traverse array
3. Keep track of maximum element
4. Return maximum element after traversal

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxElement(vector<int>& nums) {
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }
        return max;
    }
};
