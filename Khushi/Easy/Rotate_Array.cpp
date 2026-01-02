#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
      k = k%n;
      k=n-k;
      vector<int>temp(k);
      for (int i = 0; i<k; i++){
        temp[i] = nums[i];
      }

      for(int i=k; i<n; i++){
        nums[i-k] = nums[i];
      }  
      int j=0;

      for(int i = n-k; i<n; i++){
        nums[i] =temp[j];
        j++;

      }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    sol.rotate(nums, k);
    cout<<"Rotated array is : ";
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}