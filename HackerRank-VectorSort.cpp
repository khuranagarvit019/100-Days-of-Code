#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>vect;
    int N, num;
    cin >> N;
    
    while (cin >> num){ 
        vect.push_back(num);
    }

    sort(vect.begin(), vect.end());
    
    for(int i=0; i<N; i++) {
        cout << vect[i] << " ";
    }
    return 0;
}
