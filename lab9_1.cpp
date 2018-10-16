#include <iostream>
using namespace std;
int main()
{
	int i=0;
	short a=0;
	long b=0l;
	bool result=true;
	double d=0.0;
	float c=0.0f;
	int* p1=&i;
	short* p2=&a;
	long* p3=&b;
	bool* p4=&result;
	double* p5=&d;
	float* p6=&c;
	cout<<"The size of integer variable is "<<sizeof(i)<<" bytes."<<endl;
	cout<<"The size of short variable is "<<sizeof(a)<<" bytes."<<endl;
	cout<<"The size of long variable is "<<sizeof(b)<<" bytes."<<endl;
	cout<<"The size of boolean variable is "<<sizeof(result)<<" bytes."<<endl;
	cout<<"The size of double variable is "<<sizeof(d)<<" bytes."<<endl;
	cout<<"The size of float variable is "<<sizeof(c)<<" bytes."<<endl;
	cout<<"The size of integer pointer is "<<sizeof(p1)<<" bytes."<<endl;
	cout<<"The size of short pointer is "<<sizeof(p2)<<" bytes."<<endl;
	cout<<"The size of long pointer is "<<sizeof(p3)<<" bytes."<<endl;
	cout<<"The size of boolean pointer is "<<sizeof(p4)<<" bytes."<<endl;
	cout<<"The size of double pointer is "<<sizeof(p5)<<" bytes."<<endl;
	cout<<"The size of float pointer is "<<sizeof(p6)<<" bytes."<<endl;
	cout<<"Therefore, the size of individual variables change with data types but the size of the pointer remains constant."<<endl;
	return 0;
}


	
