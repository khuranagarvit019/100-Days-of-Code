#include <iostream>
using namespace std;


int main() {
   int key, n=6;
   int i = 0;
   int arr[] = { 21, 53, 96, 47, 56, 45};
   key=56;
   
   for (i = 0; i < n; i++) {
      if (arr[i] == key) {
         cout<<key<<" is present at index "<<i<<endl;
         break;
      }
   }
   
   if (i == n)
   	cout<<key<<" isn't present in the array."<<endl;

   return 0;
}
