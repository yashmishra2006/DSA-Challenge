#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size() -1;
        int j,k = 0;
        vector <int> sorted;
        for (int i = 0; i<size; i++){
            if (nums1[j]>nums2[k]){
                sorted[i]==nums2[k];
                k++;
            }
            else{
                sorted[i]==nums1[j];
                j++;
            }
        }
        return sorted;
    }
};


int main() {
    vector<int> arr1 = {1, 2, 3};
    vector <int> arr2 = {2, 5, 11, 12};
    int n = 10, m = 7;

    Solution obj;
    vector<int> result = obj.unionArray(arr1, arr2);

    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) cout << val << " ";
    return 0;
}