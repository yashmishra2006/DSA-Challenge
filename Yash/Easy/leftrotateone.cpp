#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        vector<int> newarr;
        int first = nums[0];
        for (int i=1; i,nums.size(); i++){
            nums[i-1]=nums[i];
        }
        nums[nums.size()]=first;
    }
};