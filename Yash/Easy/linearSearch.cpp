#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i = 0; i<nums.size();i++){
            if (nums[i]==target){
                return i;
            }
        }

        return -1;
    }
};


int main()
{
    // Declare and initialize the array
    vector <int> nums = {1, 2, 3, 4, 5};

    // Number to search for
    int num = 4;

    Solution sol;
    // Call the search function and store the result
    int val = sol.linearSearch(nums, num);

    // Print the index of the found number or -1 if not found
    printf("%d", val);

    return 0;
}
