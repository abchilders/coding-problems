// from LeetCode
/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order. */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices = {0};  
        
        // vectors of size 0, 1, and 2: solution contains all elements
        // O(N)
        if (nums.size() < 3) {
            if (nums.size() == 2) {
                indices.push_back(1);
            }
            return indices; 
        }
        
        // vector of size 3+: send check each element against every other element
        // until we find the two numbers that add up to target 
        // O(N^2)
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    indices = {i, j}; 
                    return indices; 
                }
            }   
        }
        
        // if no solution found, return empty vector? 
        return indices; 
    }
};