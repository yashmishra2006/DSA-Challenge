#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1){
            return "";
        }
        int gcdLen = __gcd(str1.length(), str2.length());
        return str1.substr(0, gcdLen);
    }
};

int main() {
    Solution sol;
    string str1 = "ABABAB";
    string str2 = "ABAB";
    cout << "GCD of strings: " << sol.gcdOfStrings(str1, str2) << endl;
    return 0;
}