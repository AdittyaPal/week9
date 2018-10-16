#include <iostream>
using namespace std;
void printByIndex(char*);
void printByPointer(char*);
int main()
{
	int size;
	cout<<"Enter the size of your name."<<endl;
	cin>>size;
	char name[size+1];
	cout<<"Enter your name."<<endl;
	cin>>name;
	printByIndex(name);
	printByPointer(name);
	return 0;
}
void printByIndex(char n[])
{
	cout<<"Printing your name using indices>>"<<endl;
	int i=0;
	while(n[i]!='\0')
	cout<<n[i++];
	cout<<endl;
}
void printByPointer(char n[])
{
	cout<<"Printing your name using pointer>>"<<endl;
	int i=0;
	while(*n!='\0')
	cout<<*n++;
	cout<<endl;
}
