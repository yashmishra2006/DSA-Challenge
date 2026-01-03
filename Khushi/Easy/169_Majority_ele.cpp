#include <bits/stdc++.h>
using namespace std;

int MajorityEle(vector<int> &nums){
    unordered_map<int,int> count;
    int n = nums.size();

    for(int num : nums){
        count[num]++;
        if(count[num] > n/2){
            return num;
        }
    }
    return -1; 
}

int main(){
    vector<int> nums = {2,3,2,2,2,4,5};
    int result = MajorityEle(nums);

    if(result != -1)
        cout << "majority element is " << result << endl;
    else
        cout << "nno majority element" << endl;

    return 0;
}
