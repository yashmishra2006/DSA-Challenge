#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int RemoveDuplicates( vector<int> & nums) {
        int n = nums.size();
        if (n==0||n==1) return n;
        int i = 0;
        for (int j = 1; j <n; j++){
            if (nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;

    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1,2,3,4,4,5,5};
    int length=sol.RemoveDuplicates (nums);
    cout<<"Length of Distict elements is : " << length<<endl;
}