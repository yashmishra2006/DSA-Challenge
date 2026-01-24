/*
 * @lc app=leetcode id=2149 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> arr(n); 
        int positive = 0;
        int negative = 1; 
        for (int i = 0; i < n; i++)
        {

            if (nums[i]>0)
            {
                arr[positive] = nums[i]; 
                positive += 2; 
            }
            else
            {
                arr[negative] = nums[i]; 
                negative += 2; 
            }
        }
        
        return arr; 
    }
    
};
// @lc code=end

