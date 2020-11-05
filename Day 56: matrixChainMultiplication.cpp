#include<iostream>
using namespace std;

void display(int m, int n, int p, int q, int A[50][50], int B[50][50]);
void matrixChainMultiplication(int m, int n, int p, int q, int A[50][50], int B[50][50], int Product[50][50]);

void input(int m, int n, int p, int q,int A[50][50], int B[50][50], int Product[50][50]) {

    int i, j;

    cout<<"Enter the number of rows & coloumns in matrix A"<<endl;
    cin>>m>>n;

    cout<<"Enter the elements of matrix A"<<endl;
    for(i=0; i < m; i++) {
        for(j=0; j<n; j++) {
            cin>>A[i][j];
        }
    }

    cout<<"Enter the number of rows & coloumns in matrix B"<<endl;
    cin>>p>>q;

    if(n != p) {
        cout<<"Mathematical Error due to insufficient Matrix Size"<<endl;
    }

    else {
        cout<<"Enter the elements of matrix B"<<endl;
        for(i=0; i < p; i++) {
            for(j=0; j<q; j++) {
                cin>>B[i][j];
            }
        }

        display(m,n,p,q,A,B);
        matrixChainMultiplication(m,n,p,q,A,B,Product);

    }

}

void display(int m, int n, int p, int q, int A[50][50], int B[50][50]) {
    
    int i,j;
    cout<<"Matrix A:"<<endl;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix B:"<<endl;
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

}

void matrixChainMultiplication(int m, int n, int p, int q, int A[50][50], int B[50][50], int Product[50][50]) {
    int i, j, k, sum = 0;

    for(i=0; i<m; i++) {
        for(j=0; j<q; j++) {
            for(k=0; k<p; k++) {
                sum += A[i][k]*B[k][j];
            }
            Product[i][j] = sum;
            sum = 0;
        }
    }

    cout<<"Results after chain multiplication:"<<endl;
    for(i = 0; i<m; i++) {
        for(j=0; j<q; j++) {
            cout<<Product[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int m,n,p,q,A[50][50], B[50][50], Product[50][50];
    input(m,n,p,q,A,B,Product);

    return 0;
}
