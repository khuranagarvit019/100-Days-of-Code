#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length()-1;
    for(int i=0 ;i < n ; i++) {
        if(s[i]==s[i+1]){
                s.erase(i,2);
                i=-1;
        }
    }
    cout<<s;
    if (s.length() == 0) {
    cout<<"Empty String";
    }
    return 0;
}
