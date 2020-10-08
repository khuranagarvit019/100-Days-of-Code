#include <iostream>
using namespace std;

void selectActivity(int startTime[], int finishTime[], int num) {
    int j=0;
    cout<<"\n\nSelected Activities (indexes are printed below): "<<endl;

    for(int i=0; i<num; i++) {
        if (startTime[i] >= finishTime[j]) {
            cout<<i<<" ";
            j = i;
        }
    }
}

int main() {
    
    int startTime[100], finishTime[100], num;
    cout<<"Enter the size of array: "<<endl;
    cin>>num;
    
    cout<<"Enter the elements of startTime array: "<<endl;
    for (int i = 0; i<num ; i++) {
        cin>>startTime[i];
    }

    cout<<"Enter the elements of finishTime array: "<<endl;
    for (int i = 0; i<num ; i++) {
        cin>>finishTime[i];
    }

    cout<<"\nYou have entered (in startTime): "<<endl;
    for (int i=0; i<num; i++) {
        cout<<startTime[i]<<" ";
    }

    cout<<"\n\nYou have entered (in finishTime): "<<endl;
    for (int i=0; i<num; i++) {
        cout<<finishTime[i]<<" ";
    }    

    selectActivity(startTime, finishTime, num);
    
    return 0;
}
