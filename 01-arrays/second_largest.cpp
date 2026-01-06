/*
Problem: Second Largest Element in an Array
Platform: LeetCode
Difficulty: Easy
Pattern: Loop Traversal

Approach:
1. Maintain two variables max and second_max
2. Compare array element with max, if it is greater update both max and second_max
3. If element is less than max but greater than second_max, update second_max only
4. Continue until end of array

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargest(vector<int>& nums) {
        int max=INT_MIN, second_max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                second_max=max;
                max=nums[i];
            }
            else if(nums[i]>second_max && nums[i]!=max){
                second_max=nums[i];
            }
        }
        return second_max;
    }
};

