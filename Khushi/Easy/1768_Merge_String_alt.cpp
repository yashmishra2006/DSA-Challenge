#include <bits/stdc++.h>
using namespace std;    

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;
        while(i<word1.length() || j<word2.length()){
            if(i<word1.length()){
                result += word1[i++];
            }
            if(j<word2.length()){
                result += word2[j++];
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    string word1 = "abc", word2 = "pqr";
    cout << sol.mergeAlternately(word1, word2) << endl; 
    return 0;
}