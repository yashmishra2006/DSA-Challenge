/*first output was this The missing number is: -4613 :( */


#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = (size * (size + 1))/2;
        int arrsum = 0;
        for(int i = 0; i<size;i++){
            arrsum += nums[i];        }
        cout<<arrsum <<"/n";
        cout<<sum;

        return sum - arrsum;
    }
};

int main() {
    vector<int> a = {1, 2, 0, 4, 5};

    Solution obj;
    int ans = obj.missingNumber(a);
    cout << "The missing number is: " << ans << endl;

    return 0;
}