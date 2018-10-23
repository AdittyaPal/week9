#include <iostream>
using namespace std;
bool contains(char*,char);
int main()
{
	char s[25];
	cout<<"Enter a string with less than 25 characters.\n";
	cin>>s;
	char ch;
	cout<<"Enter the character to check if it is contained in the string or not.\n";
	cin>>ch;
	bool result=contains(s,ch);
	cout<<"The inputted string is: "<<s<<endl;
	if(result==true)	
	cout<<"The character "<<ch<<" is contained within the inputted string "<<endl;
	else
	cout<<"The character "<<ch<<" is not contained within the inputted string "<<endl;
	return 0;
}
bool contains(char* p,char c)
{
	while(*p!='\0')
	{
		if(*p==c)
		return true;
		p++;
	}
	return false;
}
