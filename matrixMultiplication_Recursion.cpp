// This Code works for multiplication of 2 x 2 Matrix  using Recursion

#include<iostream>
using namespace std;

void input(int A[2][2], int B[2][2]){
	int i,j;
	cout<<"Enter elements of Matrix A (2 x 2)"<<endl;
	for (i=0; i<2 ; i++){
		for(j =0; j<2 ; j++){
			cin>>A[i][j];
		}
	}
	
	cout<<"Enter elements of Matrix B (2 x 2)"<<endl;
	for (i=0; i<2 ; i++){
		for(j =0; j<2 ; j++){
			cin>>B[i][j];
		}
	}
}

void printMatrix(int A[2][2], int B[2][2]){
	int i,j;
	cout<<"Matrix A"<<endl;
	for (i=0; i<2 ; i++){
		for(j =0; j<2 ; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Matrix B"<<endl;
	for (i=0; i<2 ; i++){
		for(j =0; j<2 ; j++){
			cout<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}

void multiply(int A[2][2], int B[2][2], int C[2][2]){

	static int i=0, j=0, k=0;
	if(i >= 2){
		return;
	}
	else if (i < 2) {
		if (j<2){
			if (k < 2){
				C[i][j] += A[i][k] * B[k][j];
				k++;
				multiply(A,B,C);
			}
			k =0;
			j++;
			multiply(A, B, C);
		}
		j=0;
		i++;
		multiply(A, B, C);
	}
}
void resultantMatrix(int C[2][2]){
	int i,j;
	cout<<"Matrix A x B using Recursion"<<endl;
	for (i=0; i<2 ; i++){
		for(j =0; j<2 ; j++){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){

	int A[2][2] , B[2][2], C[2][2] ={0};
	
	input(A,B);	
	printMatrix(A,B);	
	multiply(A,B,C);
	resultantMatrix(C);
return 0;
}
