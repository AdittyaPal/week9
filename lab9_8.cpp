#include <iostream>
using namespace std;
int myStrLen(char*);
int main()
{
	char s[25];
	cout<<"Enter a string with less than 25 characters.\n";
	cin>>s;
	int length=myStrLen(s);
	cout<<"The inputted string is: "<<s<<endl;
	cout<<"The length of the string is "<<length<<endl;
	return 0;
}
int myStrLen(char* p)
{
	int counter=0;
	while(*p++!='\0')
	++counter;
	return counter;
}
