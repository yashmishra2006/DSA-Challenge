/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
#include <vector>
#include <algorithm>
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(); 
        int less = 0; 
        int more = 0; 
        for (int i = 0; i < n; i++)
        {
            if (nums[i]<=nums[(i+1)%n]) less++; 
            else more ++; 
        }
        if (less == n) return true; 
        else if (less == n-1 && more == 1 ) return true; 
        return false;
        
    }
};
// @lc code=end

