#include <bits/stdc++.h> 
using namespace std; 

void printArray(int arr[], int n) { 
	for (int i = 0; i < n; i++) { 
		cout << arr[i] << " "; 
	} 
	cout << endl; 
} 

void BinaryStrings(int n, int arr[], int i) { 
	if (i == n) { 
		printArray(arr, n); 
		return; 
	} 

	arr[i] = 0; 
	BinaryStrings(n, arr, i + 1); 

	arr[i] = 1; 
	BinaryStrings(n, arr, i + 1); 
} 

 
int main() { 
	int n = 5; 
	int arr[n]; 

	BinaryStrings(n, arr, 0); 

	return 0; 
} 
