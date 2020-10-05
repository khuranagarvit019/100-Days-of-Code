#include<iostream>
using namespace std;

//Assumption: Activities are already sorted according to their finishTime

void selectActivity(int startTime[], int finishTime[], int n) {
    int i = 0, j ;
    cout<<"Selected Activities"<<endl;
    cout<<i<<" ";
    for (j = 1; j < n; j++) {
        if (startTime[j] >= finishTime[i]) {
            cout<<j<<" ";
            i = j;
        }
    }

}

int main() {
    int startTime[] = {5, 4, 3, 2, 1, 6};
    int finishTime[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(startTime)/sizeof(startTime[0]);
    selectActivity(startTime, finishTime, n);

    return 0;
}
