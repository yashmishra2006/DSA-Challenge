#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {9,1,2,3,6,4};
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}

