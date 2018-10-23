#include <iostream>
using namespace std;
int countEven(int*,int);
int main()
{
	int size=0;
	cout<<"Enter the size of the array.\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array.\n";
	for(int i=0;i<size;i++)
	cin>>arr[i];
	cout<<"The inputted array is>>\n";
	for(int i=0;i<size;i++)
	cout<<arr[i]<<",";
	cout<<endl;
	cout<<"The number of even numbers in the inputted array is "<<countEven(arr,size)<<endl;
	return 0;
}	
int countEven(int a[],int s)
{
	int counter=0;
	for(int i=0;i<s;i++)
	if(a[i]%2==0)
	counter++;
	return counter;
}
