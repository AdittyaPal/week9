#include <iostream>
using namespace std;
void printByIndex(int*,int);
void printByPointer(int*,int);
int main()
{
	int size=10;
	int arr[size];
	cout<<"Enter the elements of the array."<<endl;
	for(int i=0;i<10;i++)
	cin>>arr[i];
	printByIndex(arr,size);
	printByPointer(arr,size);
	return 0;
}
void printByIndex(int array[],int s)
{
	cout<<"Printing the array using the indices>>"<<endl;
	for(int i=0;i<s;i++)
	cout<<array[i]<<",";
	cout<<endl;
}
void printByPointer(int array[],int s)
{
	cout<<"Printing the array using a pointer>>"<<endl;
	for(int i=0;i<s;i++)
	cout<<*(array+i)<<",";
	cout<<endl;
}
