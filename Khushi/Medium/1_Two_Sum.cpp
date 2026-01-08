#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int,int> seen;
        for(int i=0; i<nums.size(); i++){
            int comp = target -nums[i];
            if(seen.find(comp) !=seen.end()){
                return {seen[comp], i};
            }
            seen[nums[i]] =i;
        }
        return {};
    }
    
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout << "indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}