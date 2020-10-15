#include<iostream>
using namespace std;

class _base{
	protected:
		int a, b;
};
class _der1:protected _base{
	public:
		void input(){
			cout<<"Enter the two integer\n";
			cin>>a>>b;
		}
};
class _der2:protected _der1{
	public:
		void sum(){
			input();
			cout<<"sum = "<<a+b<<"\n";
		}
	};
int main(){
	_der2 d1;
	d1.sum();
}
