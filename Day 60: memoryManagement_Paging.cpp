#include<iostream>
using namespace std;


int main() {
    int memorySize;
    int pageSize, numOfPage;
    int p[100];
    int frameNum, offset;
    int logicalAddress, physicalAddress;
    int i;

    cout<<"Enter Memory Size: ";
    cin>>memorySize;
    cout<<"\nEnter Page Size: ";
    cin>>pageSize;

    numOfPage  = memorySize/pageSize;

    for (i=0; i< numOfPage; i++) {
        cout<<"\nEnter the frame of page "<<i+1<<" : ";
        cin>>p[i];
    }

    cout<<"\nEnter a logical Address: ";
    cin>>logicalAddress;
    frameNum = logicalAddress/pageSize;
    offset = logicalAddress % pageSize;
    physicalAddress = (p[frameNum]*pageSize)+offset;
    cout<<"\nPhysical Address is: "<<physicalAddress;

    return 0;

}
