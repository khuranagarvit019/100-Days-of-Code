#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {  
    
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
} 

void printArray(int arr[], int size) {  
    
    int i;  
    for (i = 0; i < size; i++){ 
        cout << arr[i] << " "; 
    } 
    cout << endl;  
}

int binarySearch(int arr[], int n, int searchElement){

    int r = n - 1; //last element of arr
    int p = 0;     //first element of arr
    int q; //middle element

    while(r >= p) {

        q = (p+r)/2;
        if (arr[q] == searchElement) {
            return q;
        }

        else if (arr[q] > searchElement) {
            r = ( q - 1);
        }
        else {
            r = ( q + 1);
        }
        
    }
    return -1;
}

int main() {
    
    int arr[] = {10, 9, 108, 41, 25 , 86};  
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array: "<<endl;
    printArray(arr, n); 
    insertionSort(arr, n);
    cout<<"Sorted Array: "<<endl;
    printArray(arr,n);

    int searchElement ;
    cout<<"Enter the element you want to search for ";
    cin>>searchElement;

    int final = binarySearch(arr, n, searchElement);
    if (final == -1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at "<<final;
    }



    return 0;
}