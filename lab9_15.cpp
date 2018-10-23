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
	{
		for(int i=0;;i++)
		{
			if(*(p+i)!='\0')
			cout<<*(p+i);
			else
			break;
		}
		cout<<endl;
		p++;
		
	}
	cout<<endl<<"$"<<endl;
	return 0;
}
