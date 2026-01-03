/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(); 
        int max = 0; 
        int current = 0; 
        for (int i = 0; i < n; i++)
        {
            if (nums[i]==1)
            {
                current ++; 
                if ((i+1 >= n || nums[i+1] != 1) && i<n)
                {
                    if (max < current)
                    {
                        max = current; 
                    }
                    current = 0; 
                }
                
            }
            if (max < current)
            {
                max = current; 
            }
        }
        return max; 
    }
};
// @lc code=end

