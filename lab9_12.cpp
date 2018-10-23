#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int* p=&a;
	b=*p;
	cout<<" a stores "<<a<<", b stores "<<b<<", and p points to "<<*p<<endl; 
	a=2;
	b=3;
	cout<<" a stores "<<a<<", b stores "<<b<<", and p points to "<<*p<<endl;
	p=&b;
	cout<<" a stores "<<a<<", b stores "<<b<<", and p points to "<<*p<<endl;	
	return 0;
}
