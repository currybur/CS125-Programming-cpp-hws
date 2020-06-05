#include "head.h"

long_comp operator+(const long_comp &n1, const long_comp &n2)
{
    long_comp tmp;
    tmp.real=n1.real+n2.real;
    tmp.imag=n1.imag+n2.imag;
    return tmp;
}

void long_comp::display() const
{
    real.display();
    cout<<"+(";
    imag.display();
    cout<<"i)";
}

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

LongLongint operator+(const LongLongint &n1,const LongLongint &n2)
{
    LongLongint tmp;
    int newlen=max(n1.lenth,n2.lenth)+1;
    char *temp = new char[newlen];
    int i, j = 0;
    for(i=0;i<min(n1.lenth,n2.lenth);i++)
    {
        temp[i]=n1.number[i]-'0'+n2.number[i]-'0'+j;
        if ( temp[i] >= 10)  j = temp[i] / 10; else j = 0;
        temp[i] = temp[i] % 10 + '0';
    }
    for (i=min(n1.lenth,n2.lenth); i<newlen-1;i++)
    {
        if(n1.lenth>n2.lenth)
        {
            temp[i] = n1.number[i] - '0' + j;
            if ( temp[i] >= 10)  j = temp[i] / 10; else j = 0;
            temp[i] = temp[i] % 10 + '0';
        }
        else
        {
            temp[i] = n2.number[i] - '0' + j;
            if ( temp[i] >= 10)  j = temp[i] / 10; else j = 0;
            temp[i] = temp[i] % 10 + '0';
        }
    }
    if(j!=0)
    {
        temp[newlen-1] = j;
        tmp.number = new char[newlen];
        tmp.lenth = newlen;
        strcpy(tmp.number, temp);
    }
    else
    {
        tmp.number = new char[newlen - 1];
        tmp.lenth = newlen - 1;
        for(int i=0;i<tmp.lenth;i++)tmp.number[i]=temp[i];
    }
    delete [] temp;
    return tmp;
}

LongLongint &LongLongint::operator=(const LongLongint &num)
{
    lenth=num.lenth;
    number=new char[lenth];
    strcpy(number,num.number);
}

void LongLongint::display() const
{
    for(int i=lenth-1;i>=0;i--)
        cout<<number[i];
}
