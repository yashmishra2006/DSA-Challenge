#include <iostream>
#include <vector>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for (int i =1; i<nums.size(); i++){
				if (nums[i-1]>nums[i]){
					return false;
				}
			}

			return true;
		}
};

int main() {
    Solution sol;

    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 3, 2, 4, 5};

    cout << "arr1 sorted? " << sol.isSorted(arr1) << endl;
    cout << "arr2 sorted? " << sol.isSorted(arr2) << endl;

    return 0;
}