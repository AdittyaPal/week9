#include <iostream>
using namespace std;
int Strlen(char*);
int Strcmp(char*,char*);
char* Strchr(char*,char);
char* Strstr(char*,char*);

int main()
{
    int size1,size2=0;
    char ch;
    cout<<"Enter the length of the first string.\n";
    cin>>size1;    
    char str1[size1];
    cout<<"Enter a string\n";
    cin>>str1;
     cout<<"Enter the length of the second string.\n";
    cin>>size2;
    char str2[size2];
    cout<<"Enter another string\n";
    cin>>str2;
    cout<<"The length of the string "<<str1<<" is "<<Strlen(str1)<<endl;
    cout<<"The length of the string "<<str2<<" is "<<Strlen(str2)<<endl;
    cout<<"Comparing the strings lexicographically gives "<<Strcmp(str1,str2)<<endl;
    cout<<"Enter a character to search in the first string.\n";
    cin>>ch;
    char* result=Strchr(str1,ch);
    if(*result=='\0')
    cout<<ch<<" is not present in "<<str1<<endl;
    else
    cout<<ch<<" is present at index "<<(result-str1)<<endl;
    result=Strstr(str2,str2);
    if(*result=='\0')
    cout<<str2<<" is not present in "<<str1<<endl;
    else
    cout<<str2<<" is present in "<<str1<<endl;
    return 0;
   
}
int Strlen(char* str)
{
    int length=0;
    while(*(++str)!='\0')
    length++;
    return (length+1);
}
int Strcmp(char* str1,char*str2)
{
    int size1=Strlen(str1);
    int size2=Strlen(str2);
    while(*str1!='\0'&&*str2!='\0')
    {
        if(*str1==*str2)
        {
            str1++;
            str2++;
        }
        else
        break;
    }
    if(*str1=='\0'||*str2=='\0')
	return (size1-size2);
    else
    return ((int)(*str1)-(int)(*str2));
}
char* Strchr(char* str,char ch)
{
    while(*str!='\0')
    {
        if(*str==ch)
        break;
        str++;
    }
    return str;
}
char* Strstr(char* str1,char* str2)
{
    int size1=Strlen(str1);
    int size2=Strlen(str2);
    char* begin;
    int counter=0;
    for(int i=0;i<size1-size2;i++)
    {
        for(int j=i;j<i+size2;j++)
            if(*(str1+j)==*(str2+j-i))
                counter++;
        if(counter==size2)
        {
            begin=str1+i;
            break;
        }
        counter=0;
    }
    return begin;
}