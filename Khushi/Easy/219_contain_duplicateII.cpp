#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;
        for(int i = 0; i < nums.size(); i++){
            if(lastIndex.find(nums[i]) != lastIndex.end()){
                if(i - lastIndex[nums[i]] <= k){
                    return true;
                }
            }
            lastIndex[nums[i]] = i;
        }
        return false;
    }

};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    int k = 2;
    cout << (sol.containsNearbyDuplicate(nums, k) ? "True" : "False") << endl;
    return 0;
}