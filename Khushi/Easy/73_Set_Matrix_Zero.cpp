#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool rowZero = false, colZero = false;

        for(int j = 0; j<n; j++){
            if(matrix[0][j]==0){
                rowZero = true;
                break;
            }
        }
        for(int i = 0; i<m; i++){
            if(matrix[i][0]==0){
                colZero = true;
                break;
            }
        }

        for(int i = 1; i<m; i++){
            for(int j =1; j<n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i=1; i<m; i++){
            for(int j = 1; j<n; j++){
                if (matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if (rowZero){
            for(int j = 0; j<n; j++){
                matrix[0][j]=0;
            }
        }
        if(colZero){
            for(int i = 0; i<m; i++){
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    sol.setZeroes(matrix);
    for (const auto& row : matrix) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}