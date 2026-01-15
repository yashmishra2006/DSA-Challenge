#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        if (n<4) return res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j = i+1; j<n-2; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int left = j+1, right = n-1;
                while(left<right){
                    long long sum = (long long)nums[i] +nums[j] + nums[left] + nums[right];

                    if(sum==target){
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left<right && nums[left] == nums[left+1]) left++;
                        while (left <right && nums[right] == nums[right-1]) right--;

                        left++;
                        right--;
                    }
                    else if (sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = sol.fourSum(nums, target);
    for (const auto& quad : result) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}