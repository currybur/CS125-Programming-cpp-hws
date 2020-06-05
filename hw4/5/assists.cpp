//file: assist functions

#include "head.h"

bool charsame(char *a, char *b,int len)
{
    int flag=0;
    for(int i=0;i<len;i++)
        if(a[i]!=b[i])flag++;
    if(flag==0)return true;
    else return false;
}

int leng(char *a)
{
    int len=0,i=0;
    while(a[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}

bool comp_char(char *a, char *b, int lena, int lenb)
{
    for(int i=0;i<min(lena,lenb);i++)
    {
        if(a[i]<b[i])return true;
        else if(a[i]>b[i])return false;
        else continue;
    }
    if(lena<lenb)return true;
    else return false;
}
