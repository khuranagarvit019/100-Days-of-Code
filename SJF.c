//Shortest Job First 
#include<stdio.h>

void insertionSort(int burst_time[], int n){

    int i, j, key;  
    for (i = 1; i < n; i++) {

        key = burst_time[i];  
        j = i - 1;  
  
        
        while (j >= 0 && burst_time[j] > key) {  
            burst_time[j + 1] = burst_time[j];  
            j = j - 1;  
        }  
        burst_time[j + 1] = key;  
    }  
}  
  
void findWaitingTime(int processes[], int n, int bt[], int wt[]){
    // waiting time for first process will be 0
    wt[0] = 0;
    
    // calculation of waiting time
    for (int i = 1; i < n ; i++){
        wt[i] =  bt[i-1] + wt[i-1];
    }

    // printing waiting time
     for (int i = 0; i < n ; i++){
       printf("%d", wt[i]);
       printf(" ");
    }    
}

int main(){
    
    int processes[] = { 1, 2, 3, 4, 5};
    //calculating size of processes[] array
    int n = sizeof processes / sizeof processes[0];

    // burst time of all processes
    int  burst_time[] = {5, 2, 6, 1, 7};
    // declaring an array for waiting time
    int waiting_time[] = {0};

    insertionSort(burst_time, n);
    findWaitingTime(processes, n,  burst_time, waiting_time);
    
    
    return 0;
}
