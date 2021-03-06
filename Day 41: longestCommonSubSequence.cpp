#include <iostream>
#include <cstring>
using namespace std;

int max(int a, int b) {
    return (a>b)? a : b;
}

int longestCommonSubSeq(char *A, char *B, int i, int j) {

    if (i == 0 || j == 0) {
        return 0;
    }
    if (A[i-1] == B[j-1]) {
        return 1 + longestCommonSubSeq(A,B,i-1,j-1);
    }
    else {
        return max(longestCommonSubSeq(A,B,i,j-1), longestCommonSubSeq(A,B,i-1,j));
    }
}

int main() {
    char A[] = "stone";
    char B[] = "longest";

    int i = strlen(A);
    int j = strlen(B);

    cout<<longestCommonSubSeq(A,B,i,j);

    return 0;
}
