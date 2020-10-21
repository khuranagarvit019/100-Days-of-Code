#include <iostream>
using namespace std;

int fib(int n) {
    int arr[n];
    arr[0] = 0, arr[1] = 1;
    if (n<=1) {
        return n;
    }

    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i-2] + arr[i-1];
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

}
int main() {
    int n;
    cout<<"Enter the number of terms:"<<endl;
    cin>>n;

    fib(n);
}
