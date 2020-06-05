#include "safeint.h"

const int ma=0x7fffffff;
const int mi=0x80000000;

safeint operator+(const safeint& a, const safeint&b)
{
    safeint c;
    if(a.number>ma-b.number)throw outofrange();
    else if(a.number<mi-b.number)throw outofrange();
    c.number=a.number+b.number;
    return c;
}

safeint operator-(const safeint& a, const safeint&b)
{
    safeint c;
    if(a.number>ma+b.number)throw outofrange();
    else if(a.number<mi+b.number)throw outofrange();
    c.number=a.number-b.number;
    return c;
}

safeint operator*(const safeint& a, const safeint&b)
{
    safeint c;
    if(a.number>ma/b.number)throw outofrange();
    else if(a.number<mi/b.number)throw outofrange();
    c.number=a.number*b.number;
    return c;
}

safeint operator/(const safeint& a, const safeint&b)
{
    safeint c;
    if(a.number>ma*b.number)throw outofrange();
    else if(a.number<mi*b.number)throw outofrange();
    c.number=a.number/b.number;
    return c;
}

ostream & operator<<(ostream & os,const safeint &n)
{
    os<<n.number;
    return os;
}
