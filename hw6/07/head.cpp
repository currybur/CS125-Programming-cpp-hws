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

signed_lli::signed_lli(const signed_lli &num)
{
    lenth = num.lenth;
    number = new char[lenth];
    for(int i=0;i<lenth;i++)
        number[i]=num.number[i];
    sign=num.sign;
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

signed_lli operator+(const signed_lli&n1,const signed_lli&n2)
{
    signed_lli tmp;
    if(n1.sign==n2.sign)
    {
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
    tmp.sign=n1.sign;
    return tmp;
    }
    else
        {
            signed_lli n3=n1,n4=n2;
            n4.sign=n3.sign;
            return n3-n4;
        }
}

signed_lli operator-(const signed_lli&n1,const signed_lli&n2)
{
    signed_lli tmp;
    if(n1.sign!=n2.sign)
    {
        signed_lli n3=n1,n4=n2;
        n4.sign=n3.sign;
        return n3+n4;
    }
    else
    {
        int newlen=max(n1.lenth,n2.lenth);
        char *temp = new char[newlen];
        int i, j = 0;
        for(i=0;i<min(n1.lenth,n2.lenth);i++)
        {
            int a=n1.number[i]-'0'-(n2.number[i]-'0')+j;
            if ( a<0)j=-1;else j=0;
            temp[i]=(a+10)%10+'0';
        }
        for (i=min(n1.lenth,n2.lenth); i<newlen;i++)
        {
            if(n1.lenth>n2.lenth)
            {
                int a= n1.number[i] - '0' + j;
                if ( a < 0)  j = -1; else j = 0;
                temp[i] = (a+10) % 10 + '0';
            }
            else
            {
                int a = '0' - n2.number[i] + j;
                if ( a < 0)  j = -1; else j = 0;
                temp[i] = (a + 10)% 10 + '0';
            }
        }
        if(j!=0)
        {
            signed_lli ttp = n2-n1;
            ttp.sign=!ttp.sign;
            return ttp;
        }
        else
        {
            tmp.number = new char[newlen];
            tmp.lenth = newlen;
            strcpy(tmp.number,temp);
        }
        delete [] temp;
        tmp.sign=n1.sign;
        return tmp;
    }
}

LongLongint &LongLongint::operator=(const LongLongint &num)
{
    lenth=num.lenth;
    number=new char[lenth];
    strcpy(number,num.number);
}

signed_lli &signed_lli::operator=(const signed_lli &num)
{
    lenth=num.lenth;
    number=new char[lenth];
    strcpy(number,num.number);
    sign=num.sign;
}

void LongLongint::display() const
{
    for(int i=lenth-1;i>=0;i--)
        cout<<number[i];
}


ostream & operator<<(ostream & os,const signed_lli &num)
{
    int i=num.lenth-1;
    while(num.number[i]=='0')i--;
    if (num.sign == 0) os<<'-';
    for (; i >=0; --i)
        os<<num.number[i];
    return os;
}

istream & operator>>(istream & is, signed_lli &num)
{
    char a;
    cin.get(a);
    if(a=='-')num.sign=0;
    else num.sign=1;
    char b[1000];
    is>>b;
    num.lenth = strlen(b);
    num.number = new char[num.lenth];
    int j=0;
    for (int i = num.lenth-1; i >=0; i--)
        num.number[i] = b[j++];
    return is;
}

