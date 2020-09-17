// Matrix Multiplication Implementation through Strassen's Algorithm & this code works fine for multiplication of 2 x 2 Matrix

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

void strassen(int A[2][2], int B[2][2], int C[2][2]){
   int m1,m2,m3,m4,m5,m6,m7;
   m1= (A[0][0] + A[1][1])*(B[0][0]+B[1][1]);
   m2= (A[1][0]+A[1][1])*B[0][0];
   m3= A[0][0]*(B[0][1]-B[1][1]);
   m4= A[1][1]*(B[1][0]-B[0][0]);
   m5= (A[0][0]+A[0][1])*B[1][1];
   m6= (A[1][0]-A[0][0])*(B[0][0]+B[0][1]);
   m7= (A[0][1]-A[1][1])*(B[1][0]+B[1][1]);
   C[0][0]=m1+m4-m5+m7;
   C[0][1]=m3+m5;
   C[1][0]=m2+m4;
   C[1][1]=m1-m2+m3+m6;

   int i,j;
	cout<<"Matrix A x B using Strassen Method"<<endl;
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
	strassen(A,B,C);
return 0;
}
