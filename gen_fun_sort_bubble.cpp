#include <iostream> 
using namespace std; 
   
template <class T> 
void bubbleSort(T a[], int n) { 
    for (int i = 0; i < n - 1; i++) 
        for (int j = n - 1; i < j; j--) 
            if (a[j] < a[j - 1]) 
              swap(a[j], a[j - 1]); 
} 
   
int main() { 
    int a[5] = {1, 5, 3, 4, 2}; 
    int n = sizeof(a) / sizeof(a[0]); 
   
    bubbleSort(a, 5); 
   
    cout << " Sorted array : "; 
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
    cout << endl; 
   
  return 0; 
} 