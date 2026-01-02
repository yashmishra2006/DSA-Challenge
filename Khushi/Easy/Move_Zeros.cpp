#include <bits/stdc++.h>
using namespace std;

int moveZeros(vector<int>& nums){
    int k =0;
    int n = nums.size();
    for(int i =0; i<n; i++){
        if (nums[i]!=0){
            nums[k]=nums[i];
            k++;
        }
    }
    while (k<n){
        nums[k]=0;
        k++;
    }
}

int main(){
    vector<int> nums = {1,2,3,0,5,0,3,3,0,6,9,8,4};
    moveZeros(nums);
    cout<<"Array after moving 0s ";
    for (int i =0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}