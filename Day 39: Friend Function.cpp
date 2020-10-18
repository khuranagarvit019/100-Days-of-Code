#include<iostream>
using namespace std;

class abc{
	private:
		int a, b;
	
	public:
		friend void fun();
};

void fun(){ //friend function have access to all members (private or protected) 
//of the class to which it is a friend
	abc a1;
	a1.a = 10;
	a1.b = 20;
	cout<<"a = "<<a1.a<<endl;
	cout<<"b = "<<a1.b;
}

main(){
    fun(); //frined function is non-member function of the class
    // thats why it is accessible without using dot operator with object of the class
	}
	
