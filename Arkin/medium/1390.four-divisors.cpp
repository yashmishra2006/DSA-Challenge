/*
 * @lc app=leetcode id=1390 lang=cpp
 *
 * [1390] Four Divisors
 */

// @lc code=start
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size(); 
        int  result = 0; 
        
         
        for (int i = 0; i < n; i++)
        {
            int devisor = 0;
            int count = 0; 
            int j =1; 
            while(j<=nums[i]){
                
                if (nums[i]%j==0)
                {   
                    
                    count++; 
                    devisor += j; 
                    
                }
                j++; 
                if (count>4)
                {
                    break; 
                }
                
            }    
            
            if (count == 4)
            {
                result += devisor; 
            }
                
            
        }
        return result; 
    }
};
// @lc code=end

