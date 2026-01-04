#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

int main() {
    Solution sol; 
    vector<int> nums = {2,-1,5,7,-4,3,1,6,-8};
    int result = sol.maxArray(nums);
    cout << "Maximum sum is: " << result << endl;
}