#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<int> removeDuplicates(vector<int>& nums){
            vector<int> unique;
            for (int i = 1; i<nums.size(); i++){
                if(nums[i-1]!=nums[i]){
                    unique.push_back(nums[i-1]);
                }
            }
            return unique;
        }
    };

int main(){
    Solution sol;
    vector<int> arr = {1,2,3,3,4,5,6,7};

    cout << "Duplicate free array - " << sol.removeDuplicates(arr)[0] << endl;
    return 0;
}