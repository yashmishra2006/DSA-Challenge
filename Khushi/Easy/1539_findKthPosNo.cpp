#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int prev = 0;
        for(int num : arr){
            int missing = num - prev -1;
            if(k<=missing){
                return prev +k;
            }
            k-=missing;
            prev = num;
        }
        return prev + k;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << sol.findKthPositive(arr, k) << endl; // Output: 9
    return 0;
}   