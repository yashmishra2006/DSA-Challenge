#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int> ans;
        int n = nums.size();
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second>n/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
int main() {
    Solution sol; 
    vector<int> nums = {3,2,3,1,2,2,1,2,1,1};
    vector<int> result = sol.majorityElement(nums);
    cout << "Majority elements are: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
}