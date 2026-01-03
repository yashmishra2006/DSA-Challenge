/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0; 
        int zeros = 0; 
        int n = nums.size(); 
        for (int i = 0; i < n; i++)
        {
            if (nums[i]==0)
            {
                zeros++; 
            }
            else{
                nums[cnt]=nums[i]; 
                cnt++; 
            }
        }
        for (int i = n-zeros; i < n; i++)
        {
            nums[i]=0; 
        }
        
    }
};
// @lc code=end

