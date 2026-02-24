#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size(); // defined the size of the flowerbed vector    
        for(int i = 0; i<size; i++){
            if(flowerbed[i] == 0){    // checking the current position is empty or not  
                bool leftEmpty = (i==0)||(flowerbed[i-1]==0); //same for the left side of the i pos
                bool rightEmpty = (i == size-1) || (flowerbed[i+1]==0);  // and for the right side of the i pos
                if(leftEmpty && rightEmpty){
                    flowerbed[i] = 1;     //if yes then we can plant the flower at the i pos and mark it as 1
                    n--;
                    if(n==0)   // if planeted all the flowers then we can return true
                      return true;
                }

            }
        }
        return n<=0; // if we have planted all the flowers then n will be 0 or less than 0 and we can return true otherwise false
    }

};

int main (){
    Solution s;
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 2;
    cout<<s.canPlaceFlowers(flowerbed,n);
    return 0;
}