#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        
        for(int i = 1; i<intervals.size(); i++){
            if(intervals[i][0] <= merged.back()[1]){
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }else{
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> mergedIntervals = sol.merge(intervals);
    
    cout << "Merged Intervals: ";
    for (const auto& interval : mergedIntervals) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    return 0;
}