/*
Problem: Intersection of Two Arrays
Platform: LeetCode
Difficulty: Easy
Pattern: Set, Hashing

Approach:
1. Create two sets s1 and s2 to store unique elements from nums1 and nums2 respectively.
2. Iterate through both sets to find common elements.
3. Return the result vector containing the intersection.

Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1,s2;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        
        for (auto element: s1){
            if(s2.find(element)!=s2.end()){
                res.push_back(element);
            }
        }
        return res;
    }
};