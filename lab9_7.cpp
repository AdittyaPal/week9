#include <iostream>
using namespace std;
double* maximum(double* a,int size)
{
	double* m=a;
	for(int i=1;i<size;i++)
	if(*(a+i)>*m)
	m=a+i;
	return m;
}
int main()//main function declared
{
	int s=0;
	cout<<"Enter the size of the first array."<<endl;
	cin>>s;
	double arr[s];
	cout<<"Enter the elements of the first array."<<endl;
	for(int i=0;i<s;i++)
	cin>>arr[i];//elements of the first array inputted
	double* start=arr;
	double* max=maximum(start,s);
	cout<<"The maximum element of the array is "<<*max<<endl;//and printed
	return 0;
}
