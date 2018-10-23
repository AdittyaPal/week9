#include <iostream>
using namespace std;
void revString(char*);
int main()
{
	char s[10];
	cout<<"Enter a string with less than 10 characters.\n";
	cin>>s;
	revString(s);  // call the function
   return 0;
}
void revString(char* ptr)
{
	char* start=ptr;
	char* current=ptr;
	while(*(current+1)!='\0')
	current++;
	char temp;
	while(current>start)
	{
		temp=*start;
		*start=*current;
		*current=temp;
		current--;
		start++;
	}
	cout<<"The reversed string is ";
	while(*(start-1)!='\0')
	start--;
	while(*start!='\0')
	cout<<*start++;
	cout<<endl;
}
