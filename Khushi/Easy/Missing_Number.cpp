#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
    int n=nums.size();
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++){
        if (nums[i]!=i){
            return i;
        }
    }
    return n;
}

int main(){
    vector<int> nums = {3,0,1,7,4,6,2,8,9};
    missingNumber(nums);
    cout<<missingNumber(nums);
}