/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(); 
        int k = 0; 
        vector<int> arr(n); 
        int j = 0; 
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i+1])
            {
                continue; 
            }
            else{
                arr[j] = nums[i];
                j++; 
                k++; 
            } 
            
        }
        arr[j] = nums[n-1];
        j++;
        k++;
        nums = arr; 
        for (int i = 0; i < j; i++)
        {
            cout<<nums[i];
        }
        return k; 
    }
};
// @lc code=end


 
