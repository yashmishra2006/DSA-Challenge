/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        k = k % n;
        vector<int> arr(n); 
        for (int i = 0; i < n; i++)
        {
            arr[(i+k)%n] = nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] = arr[i];
            cout<<nums[i];
        }
        
    }
};
// @lc code=end

