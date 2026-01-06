/*
Problem: Count Even Numbers in an Array
Platform: LeetCode
Difficulty: Easy
Pattern: Loop Traversal

Approach:
1. Traverse the array from start to end
2. Check if each element is even
3. Increment a counter for each even number
4. Return the counter

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countEven(vector<int>& nums) {
        int count = 0;
        for(int num : nums){
            if(num % 2 == 0){
                count++;
            }
        }
        return count;
    }
};

