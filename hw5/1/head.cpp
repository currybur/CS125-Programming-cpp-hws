#include "head.h"

LongLongint::LongLongint(char lli[], int l)
{
    lenth = l;
    number = new char[lenth];
    int i=lenth-1,j=0;
    while(i>=0)
    {
        if(lli[i]>'9'||lli[i]<'0')
        {
            cout<<"set error\n";
            break;
        }
        else
        {
            number[j]=lli[i];
            --i;
            ++j;
        }
    }
}

LongLongint::LongLongint(const LongLongint &num)
{
    lenth = num.lenth;
    number = new char[lenth];
    for(int i=0;i<lenth;i++)
        number[i]=num.number[i];
}

void LongLongint::add(char lli[], int l)
{
    int newlen = max(lenth, l)+1;
    char *temp = new char[newlen];
    int i, j = 0, k = l-1;
    for (i=0; i < min(lenth,l); ++i)
    {
        temp[i] = number[i] - '0' + lli[k] - '0' + j;
        if ( temp[i] >= 10)  j = temp[i] / 10; else j = 0;
        temp[i] = temp[i] % 10 + '0';
        k--;
    }
    for (i=min(lenth, l); i<newlen-1;i++)
    {
        if(lenth>l)
        {
            temp[i] = number[i] - '0' + j;
            if ( temp[i] >= 10)  j = temp[i] / 10; else j = 0;
            temp[i] = temp[i] % 10 + '0';
        }
        else
        {
            temp[i] = lli[k] - '0' + j;
            if ( temp[i] >= 10)  j = temp[i] / 10; else j = 0;
            temp[i] = temp[i] % 10 + '0';
            k--;
        }
    }
    if(j!=0)
    {
        temp[newlen-1] = j;
        number = new char[newlen];
        lenth = newlen;
        strcpy(number, temp);
    }
    else
    {
        number = new char[newlen - 1];
        lenth = newlen - 1;
        for(int i=0;i<lenth;i++)number[i]=temp[i];
    }
    delete []temp;
}

void LongLongint::display() const
{
    for(int i=lenth-1;i>=0;i--)
        cout<<number[i];
    cout<<endl;
}
