#include "timec.h"

void timec::formalize()
{
    Timet::formalize();
    while(hour>=24)
    {
        hour-=24;
        day++;
    }
    while(hour<0)
    {
        hour+=24;
        day--;
    }
    Date::formalize();
}

timec timec::operator+=(const timec &t)
{
    Timet::operator+=((Timet)t);
    Date::operator+=((Date)t);
    timec::formalize();
    return *this;
}


timec timec::operator-=(const timec &t)
{
    Timet::operator-=((Timet)t);
    Date::operator-=((Date)t);
    timec::formalize();
    return *this;
}

timec &timec::operator++()
{
    Timet::operator++();
    timec::formalize();
    return *this;
}

timec timec::operator++(int)
{
    timec tmp=*this;
    Timet::operator++();
    timec::formalize();
    return tmp;
}

timec &timec::operator--()
{
    Timet::operator--();
    timec::formalize();
    return *this;
}

timec timec::operator--(int)
{
    timec tmp=*this;
    Timet::operator--();
    timec::formalize();
    return tmp;
}

ostream & operator<<(ostream & os,const timec &t)
{
    os<<t.year<<"/"<<t.month<<"/"<<t.day<<" "<<t.hour<<"h "<<t.minute<<"m "<<t.second<<"s ";
    return os;
}
