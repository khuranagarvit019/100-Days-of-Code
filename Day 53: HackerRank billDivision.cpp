#include<iostream>
#include<stdlib.h>
using namespace std;

void bonAppetit(int n, int k, int bill[], int b) {
    int sum1 =0;
    for(int i=0; i<n; i++) {
        if(i != k){
            sum1+= bill[i];
        }
    }
    int b1 = sum1/2;
    if (b1 == b) {
        cout<<("Bon Appetit");
    }
    else{
        int a;
        a = b - b1;
        cout<<a;
    }
}
int main() {
    int temp[2];
    for (int i = 0; i<= 1; i++) {
        cin>>temp[i];
    }
    int n = temp[0];
    int k = temp[1];

    int bill[n];

    for (int i = 0; i<n; i++) {
        cin>>bill[i];
    }

    int b;
    cin>> b;

    bonAppetit(n,k,bill,b);
}
