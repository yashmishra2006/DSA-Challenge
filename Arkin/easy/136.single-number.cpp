/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(); 
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            m = m ^ nums[i]; 
            
        }
        return m;
    }
};
// @lc code=end

