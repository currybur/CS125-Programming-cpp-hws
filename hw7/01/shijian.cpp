#include "shijian.h"

Timet Timet::operator+=(const Timet &t)
{
    hour += t.hour;
    minute += t.minute;
    second += t.second;
    while(second>=60)
    {
        second-=60;
        minute++;
    }
    while(minute>=60)
    {
        minute-=60;
        hour++;
    }
    return *this;
}

Timet Timet::operator-=(const Timet &t)
{
    hour -= t.hour;
    minute -= t.minute;
    second -= t.second;
    while(second<0)
    {
        second+=60;
        minute-=1;
    }
    while(minute<0)
    {
        minute+=60;
        hour-=1;
    }
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

ostream & operator<<(ostream & os,const Timet &t)
{
    os<<t.hour<<"h"<<t.minute<<"m"<<t.second<<"s";
    return os;
}

void Timet::formalize()
{
    while(second>=60)
    {
        second-=60;
        minute++;
    }
    while(second<0)
    {
        second+=60;
        minute--;
    }
    while(minute>=60)
    {
        minute-=60;
        hour++;
    }
    while(minute<0)
    {
        minute+=60;
        hour--;
    }
}
