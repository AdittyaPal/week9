#include<iostream>
using namespace std;
int main()
{
	char str[20];
	char* p;
	cout<<"Input about 10 characters of string\n";
	cin>>str;
	p=str;
	while(*p!='\0')
	p++;
	for(int i=1;;i++)
	{
		p=p-i;
		if(p<str)
		break;
		while(*p!='\0')
		cout<<*p++;
		cout<<endl;
				
	}
	cout<<endl;
	return 0;
}
