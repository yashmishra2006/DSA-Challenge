/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(); 
        int f =0; 
        int l = n-1; 
        int i =0; 
        while (i<=l)
        {
            if (nums[i]==0)
            {
                swap(nums[i],nums[f]);
                i++; 
                f++; 
            }
            else if(nums[i]==1){
                i++; 
            }
            else{
                swap(nums[i],nums[l]); 
                l--; 
            }
        }
    }
};
// @lc code=end
