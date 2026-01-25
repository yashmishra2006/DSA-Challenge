#include <bits/stdc++.h>        
using namespace std;
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
        
    }
private:
    int mergeSort(vector<int>&nums, int start, int end){
        if (start >= end) return 0;
        int mid = start + (end - start) /2 ;
        int count = mergeSort(nums,start,mid) +mergeSort(nums, mid+1, end);

        int j = mid+1;
        for(int i = start; i <=mid; ++i){
            while (j <=end && (long long)nums[i]>2LL*nums[j])
               ++j;
            count += (j-(mid+1));
        }

        vector<int> temp;
        int left = start, right = mid+1;
        while (left <= mid && right <= end){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }else{
                temp.push_back(nums[right++]);
            }
        }
        while (left <=mid) temp.push_back(nums[left++]);
        while (right <= end) temp.push_back(nums[right++]);

        for(int i = start; i<=end; ++i){
            nums[i] = temp[i-start];
        }
        return count;
    }
        
};

int main(){
    Solution sol;
    vector<int> nums = {1,3,2,3,1};
    cout<<sol.reversePairs(nums)<<endl; // Output: 2
    return 0;
}       