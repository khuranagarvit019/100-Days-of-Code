#include <iostream>
using namespace std;

int main() {
    int n,v;
    cin >> v;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == v) {
            cout << i << endl;
        }
    }
    return 0;
}
