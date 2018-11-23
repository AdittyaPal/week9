#include <iostream>
using namespace std;
char* Strcpy(char*,char*);
char* Strcat(char*,char*);
int Strlen(char*);
int Strcmp(char*,char*);
char* Strchr(char*,char);
char* Strstr(char*,char*);//function declarations
int main()
{
    int size1,size2=0;
    char ch;
    cout<<"Enter the length of the first string.\n";
    cin>>size1;    
    char str1[size1];
    cout<<"Enter a string\n";
    cin>>str1;//first string inputted
    cout<<"Enter the length of the second string.\n";
    cin>>size2;
    char str2[size2];
    cout<<"Enter another string\n";
    cin>>str2;//second string inputted
    char s2[size1+size2];
    char* str=s2;
    cout<<"The copied string is "<<Strcpy(str1,str)<<endl;//implementation of function strcpy
    cout<<"The concatenated string is "<<Strcat(str1,str2)<<endl;//implementation of function strcat
    cout<<"The length of the string "<<str1<<" is "<<Strlen(str1)<<endl;//implementation of function strlen
    cout<<"The length of the string "<<str2<<" is "<<Strlen(str2)<<endl;//implementation of function strlen
    cout<<"Comparing the strings lexicographically gives "<<Strcmp(str1,str2)<<endl;//implementation of function strcmp
    cout<<"Enter a character to search in the first string.\n";
    cin>>ch;
    char* result=Strchr(str1,ch);//implementation of function strchr
    if(*result=='\0')
    cout<<ch<<" is not present in "<<str1<<endl;
    else
    cout<<ch<<" is present at index "<<(result-str1)<<endl;
    result=Strstr(str2,str2);//implementation of function strstr
    if(*result=='\0')
    cout<<str2<<" is not present in "<<str1<<endl;
    else
    cout<<str2<<" is present in "<<str1<<endl;
    return 0;   
}//end of main function
char* Strcpy(char* str1,char* str2)
{
    int i=0;
    while(*(str1+i)!='\0')//till the end of the string is reached
    {
        *(str2+i)=*(str1+i);//copies character by character
        i++;
    }
    return str2;
}
char* Strcat(char* str1,char* str2)
{
    char* result=str1;//first string stored
    int i=0;
    while(*(str1++)!='\0')//pointer moved to the end of the first string
    i++;
    while(*str2!='\0')//till the end of the second string
    {
        *(result+i)=*str2;//character is added to the end of result
        str2++;
        i++;
    }
    *(result+i)='\0';//final termination of the string
    return result;
}
int Strlen(char* str)
{
    int length=0;
    while(*(++str)!='\0')//till the end of the string
    length++;//counts the number of characters
    return (length+1);
}
int Strcmp(char* str1,char*str2)
{
    int size1=Strlen(str1);
    int size2=Strlen(str2);
    while(*str1!='\0'&&*str2!='\0')//till the end of a string is reached
    {
        if(*str1==*str2)//checks whether equal
        {
            str1++;
            str2++;
        }
        else
        break;
    }
    if(*str1=='\0'||*str2=='\0')//if a string is a substring of the other
	return (size1-size2);//differences in their lengths is returned
    else
    return ((int)(*str1)-(int)(*str2));//the difference in their ASCII values is returned
}
char* Strchr(char* str,char ch)
{
    while(*str!='\0')//till the end of the string is reached
    {
        if(*str==ch)//checks if the characters are equal
        break;
        str++;
    }
    return str;//returns a pointer to that character
}
char* Strstr(char* str1,char* str2)
{
    int size1=Strlen(str1);
    int size2=Strlen(str2);
    char* begin;
    int counter=0;
    for(int i=0;i<size1-size2;i++)//fixes the strting position
    {
        for(int j=i;j<i+size2;j++)//checks size2 characters after the starting position
            if(*(str1+j)==*(str2+j-i))//for equality
                counter++;
        if(counter==size2)//if equal
        {
            begin=str1+i;
            break;
        }
        counter=0;
    }
    return begin;//pointer to the beginning of the substring is returned 
}
