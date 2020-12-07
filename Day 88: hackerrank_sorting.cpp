#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b) {  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
}  

int main() {
    int n, arr[1000];
    int numSwaps = 0;
    int i,j;
    cin>> n;
    for ( i =0; i<n; i++) {
        cin>>arr[i];
    }

 
    for (i = 0; i < n-1; i++) {     
        for (j = 0; j < n-i-1; j++) {  
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                numSwaps++;
            }
        }
        
    }      
  
    cout<<"Array is sorted in "<<numSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1];
    return 0;
}
