/*
Problem: Count Frequency
Platform: LeetCode
Difficulty: Easy
Pattern: Loop Traversal

Approach:
1. Traverse the array from start to end
2. Maintain a hash map to store frequency of each element
3. Increment the count for each element in the map

Time: O(n)
Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void countFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            cout<<it.first<<" -> "<<it.second<<endl;
        }
    }
};

