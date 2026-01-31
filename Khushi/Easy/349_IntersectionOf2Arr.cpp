#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> result;
        for(int num:nums2){
            if(s.count(num)){
                result.insert(num);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = sol.intersection(nums1, nums2);
    for(int num : result){
        cout << num << " ";
    }
    cout << endl; // Output: 2
    return 0;
}