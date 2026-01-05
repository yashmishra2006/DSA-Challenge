#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i<n; i++){
            if (nums[i-1] == 0){
                for (int j =i; j<n; j++){
                    nums[j-1]=nums[j];
                    
                }
                nums[n-1]=0;
                
            }
        }

    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    sol.moveZeroes(nums);

    // Print the result
    for (int num : nums) cout << num << " ";
    cout << endl;
    return 0;
}
