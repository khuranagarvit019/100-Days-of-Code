#include<iostream>
using namespace std;

template <class t> void swap1(t *a1, t *b1)
{
	t temp;
	temp = *a1;
	*a1 = *b1;
	*b1 = temp;
}

main(){
	int a, b;
	cin>>a>>b;
	swap1(&a, &b);
	cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
	
	double c, d;
	cin>>c>>d;
	swap1(&c, &d);
	cout<<"c = "<<c<<" "<<"d = "<<d<<endl;
	
}
