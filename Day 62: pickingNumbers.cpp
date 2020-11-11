#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,k,max = 0;
    cin>>n;
    int arr[100]={0};
    for(int i = 0;i<n;i++){
        cin>>k;
        arr[k]++;
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i]+arr[i+1]> max) max = arr[i]+arr[i+1];
    }
    cout<<max;
    return 0;
}
