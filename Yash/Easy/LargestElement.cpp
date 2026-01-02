#include <iostream>
#include <vector>
using namespace std;

int largestArray(vector<int>& nums){
    int max = nums[0];
    for (int i=0; i<nums.size(); i++){
        if (nums[i]>max){
            max = nums[i];
        }
    }
    return max;

}
    

int main() {
    vector<int> arr = {3, 5, 1, 9, 2};
    cout << "Largest element: " << largestArray(arr) << endl;
    return 0;
}
