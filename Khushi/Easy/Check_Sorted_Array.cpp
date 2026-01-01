#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool check(vector<int>& nums) { //used vector :-> dynamic size array 
        int n = nums.size();
        int count = 0;
        for(int i=1; i<n; i++){
            if(nums[i]<nums[i-1]){
                count++;
                if(count>1){
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> nums ={20, 50, 100, 400, 450, 600};
    if(sol.check(nums)){
        cout<<"Sorted arrayy"<<endl;
    }
    else{
        cout<<"Not sorted array:"<<endl;
    }
}