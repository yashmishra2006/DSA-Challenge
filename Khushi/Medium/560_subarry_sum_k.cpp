#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, ans = 0;
        for(int i = 0; i<nums.size(); i++){
           sum += nums[i];
           if(mp.count(sum-k)){
            ans += mp[sum-k];
           }
            mp[sum]++;
        }
       
       return ans;
    }
   
};
int main(){
    Solution sol;
    vector<int> nums = {1,1,1};
    int k = 2;
    int result = sol.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;
    return 0;
}