#include <iostream>
using namespace std;

void printArray(int *array, int n){
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}

void splitArray(int *array, int p, int q, int r){
    int a[r + 1] ;
    int i = p;
    int j = q + 1;
    int k = 0;

    while (i <= q && j <= r){
        if (array[i] <= array[j])
            a[k++] = array[i++];
        else
            a[k++] = array[j++];
    }
    while (i <= q){
        a[k++] = array[i++];
    }
    while (j <= r){
        a[k++] = array[j++];
        
    }k--;
    while (k >= 0){
        array[k + p] = a[k];
        k--;
    }
}
void mergeSort(int *array, int p, int r){
    int q;
                    
    if (p < r){
        q = (p + r) / 2;
        mergeSort(array, p, q);
        mergeSort(array, q + 1, r);
        splitArray(array, p, q, r);
    }
}

int main(){
    int array[] = {7, 3, 5, 6, 2, 1};
    int n = sizeof(array)/sizeof(array[0]);

    mergeSort(array, 0, n - 1);

    cout << "\nSorted Array (Merge Sort) :" << endl;
    printArray(array, n);

return 0;
}