/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(); 
        int max = nums[0]; 
        int current_max = 0; 
        for (int i = 0; i < n; i++)
        {
            current_max += nums[i]; 
            if(current_max > max){
                max = current_max; 
            }
            if (current_max < 0)
            {
                current_max = 0; 
            }

        }
        return max; 
    }
};
// @lc code=end

