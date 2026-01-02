#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for (int num :nums){
        ans ^= num;   // using XOR op -> a^a = 0 and a^0 = a -> means cancel out same nums and remain the single one.......
    }
    return ans;
}

int main(){
    vector<int> nums = {2,2,1,4,1,5,4,5,6};
    cout<<singleNumber(nums);
}