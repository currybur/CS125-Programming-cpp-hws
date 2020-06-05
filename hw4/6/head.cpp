#include "head.h"
#include <iostream>
#include <Cstring>

void longint::getli()
{
    char a[101];
    cin>>a;
    int i=strlen(a)-1,j=0;
    while(i>=0)
    {
        if(a[i]>'9'||a[i]<'0')
        {
            cout<<"set error\n";
            break;
        }
        else
        {
            num[j]=a[i];
            --i;
            ++j;
        }
    }
     for(;j<101;++j)num[j]='0';
}

void longint::display()
{
    int i=100;
    while(num[i]=='0')i--;
    while(i>=0)
    {
        cout<<num[i];
        i--;
    }
}

void longint::add(const longint &n1, const longint &n2)
{
    int i,j=0;
    for (i=0; i < 101; ++i)
    {
        num[i] = n1.num[i] - '0' + n2.num[i] - '0' + j;
        if ( num[i] >= 10)  j = num[i] / 10; else j = 0;
        num[i] = num[i] % 10 + '0';
    }
}

