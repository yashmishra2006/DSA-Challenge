#include <iostream>

int secondlargest(int arr[], int n){
    int max = arr[0];
    int second_max = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]>max){
            second_max = max;
            max = arr[i];
        }
    }
    return second_max;
}