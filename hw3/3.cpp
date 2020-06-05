#include <iostream>

using namespace std;

void delchar(char *str, char ch);

int main()
{
char str[]="hello world",ch='l';
cout<<"The original string is: "<<str<<endl<<endl;
delchar(str,ch);
cout<<"After 'l' deleted: "<<str<<endl;
}

void delchar(char *str,char ch)
{
    int i=0,j=0;
    if(str!=NULL)
    {
        for(;str[i]!='\0';i++)
        {
            if(str[i]!=ch)
            {
                str[j]=str[i];
                j++;
            }
        }
        str[j]='\0';
    }
}
