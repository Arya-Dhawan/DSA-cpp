/*
Problem: Linear Search in Array
Platform: LeetCode
Difficulty: Easy
Pattern: Loop Traversal

Approach:
1. Traverse the array from start to end
2. Compare each element with the target value
3. Return index if match found, else return -1

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};

