#include "head.h"

Timet Timet::operator+=(const Timet &t)
{
    hour += t.hour;
    minute += t.minute;
    second += t.second;
    return *this;
}
Timet Timet::operator-=(const Timet &t)
{
    hour -= t.hour;
    minute -= t.minute;
    second -= t.second;
    return *this;
}

Timet &Timet::operator++()
{
    second++;
    if(second==60)
    {
        second=0;
        minute++;
    }
    if(minute==60)
    {
        minute=0;
        hour++;
    }
    return *this;
}

Timet Timet::operator++(int x)
{
    Timet temp = *this;
    second++;
    if(second==60)
    {
        second=0;
        minute++;
    }
    if(minute==60)
    {
        minute=0;
        hour++;
    }
    return temp;
}

Timet &Timet::operator--()
{
    second--;
    if(second<0)
    {
        second=59;
        minute--;
    }
    if(minute<0)
    {
        minute=59;
        hour--;
    }
    return *this;
}

Timet Timet::operator--(int x)
{
    Timet temp = *this;
    second--;
    if(second<0)
    {
        second=59;
        minute--;
    }
    if(minute<0)
    {
        minute=59;
        hour--;
    }
    return temp;
}

void Timet::display()
{
    cout<<hour<<"h"<<minute<<"m"<<second<<"s"<<endl;
}
