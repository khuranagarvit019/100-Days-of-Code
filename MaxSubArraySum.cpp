#include <iostream>
using namespace std;

int max(int a, int b){
    return(a > b) ? a : b;
}

int maxSum(int arr[], int p, int r){

    if(r == p){                                 // only if n = 1
        return arr[p];

    }

    int q = (p+r)/2;
    int maxFromLeft = 0;
    int sum = 0;
    for (int i=q; i>=p; i--){                  // calculating the max sub array from left
        sum += arr[i];
        if (sum > maxFromLeft){
            maxFromLeft = sum;
        }
    }

    int maxFromRight = 0;
    
    sum = 0;
    for (int i= q+1; i <= r; i++){            // calculating the max sub array from right
        sum += arr[i];
        if (sum > maxFromRight){
            maxFromRight = sum;
        }
    }

    int max_Left_Right = max(maxSum(arr, p, q), maxSum(arr, q+1, r));

    return max(max_Left_Right, maxFromLeft+ maxFromRight);

}

int main() {

    int arr[] = {6, -2, 5, 1, 3, -4, 2};  // declaring array
    int n = sizeof(arr)/sizeof(arr[0]);   // finding array size
    int p = 0;
    int r = n-1;
    cout<< maxSum(arr, p, r);
    return 0;

}
