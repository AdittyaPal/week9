#include <iostream>
using namespace std;
int main()
{
	char s[10];
	cout<<"Enter a string with less than 10 characters.\n";
	cin>>s;
	char* p;
	p=s;
	while(*p!='\0')
	p++;
	while(p>=s)
	cout<<*p--;
	cout<<endl;
	return 0;
}
