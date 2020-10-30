#include<iostream>
using namespace std;

class abc
{ 
private: 
   int x; 
public: 
   void get (int x) 
   { 
       this->x = x;
       cout<<" Value of this = "<<this<<endl; //this pointer store the address of calling object
   } 
   void dis() { cout << "x = " << x << endl; } 
}; 
  
main() 
{ 
   abc a1; 
   cout<<" Address of a1 = "<<&a1<<endl; 
   a1.get(20);
   a1.dis();  
} 
