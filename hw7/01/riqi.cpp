#include "riqi.h"

Date::Date(int m, int d, int y)
{
    bool ifRun;
    int runYear[]={31,29,31,30,31,30,31,31,30,31,30,31},pingYear[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((y%4==0&&y%100!=0)||y%400==0)
        ifRun=true;
    else ifRun=false;
    if(runYear)
    {
        if(runYear[m-1]>=d)
        {
            year=y;month=m;day=d;
        }
        else
        {
            year=1900;month=1;day=1;
        }
    }
    else
    {
        if(pingYear[m-1]>=d)
        {
            year=y;month=m;day=d;
        }
        else
        {
            year=1900;month=1;day=1;
        }
    }
}

void Date::setDate(int m, int d, int y)
{
    bool ifRun;
    int runYear[]={31,29,31,30,31,30,31,31,30,31,30,31},pingYear[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((y%4==0&&y%100!=0)||y%400==0)
        ifRun=true;
    else ifRun=false;
    if(ifRun)
    {
        if(runYear[m-1]>=d)
        {
            year=y;month=m;day=d;
        }
        else
        {
            year=1900;month=1;day=1;
        }
    }
    else
    {
        if(pingYear[m-1]>=d)
        {
            year=y;month=m;day=d;
        }
        else
        {
            year=1900;month=1;day=1;
        }
    }
}

Date Date::operator++(int x)
{
    Date tmp=*this;
    day++;
    bool ifRun;
    int runYear[]={31,29,31,30,31,30,31,31,30,31,30,31},pingYear[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
        ifRun=true;
    else ifRun=false;
    if(ifRun)
    {
        if(day>runYear[month-1])
        {
            month++;
            day=1;
        }
    }
    else
    {
        if(day>pingYear[month-1])
        {
            month++;
            day=1;
        }
    }
    if(month>12)
    {
        month=1;
        year++;
    }
    return tmp;
}

Date Date::operator--(int x)
{
    Date tmp=*this;
    day--;
    bool ifRun;
    int runYear[]={31,29,31,30,31,30,31,31,30,31,30,31},pingYear[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
        ifRun=true;
    else ifRun=false;
    if(ifRun)
    {
        if(day<=0)
        {
            month--;
            day=runYear[month-1];
        }
    }
    else
    {
        if(day<=0)
        {
            month--;
            day=pingYear[month-1];
        }
    }
    if(month<=0)
    {
        month=12;
        year--;
    }
    return tmp;
}

Date &Date::operator++()
{
    day++;
    bool ifRun;
    int runYear[]={31,29,31,30,31,30,31,31,30,31,30,31},pingYear[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
        ifRun=true;
    else ifRun=false;
    if(ifRun)
    {
        if(day>runYear[month-1])
        {
            month++;
            day=1;
        }
    }
    else
    {
        if(day>pingYear[month-1])
        {
            month++;
            day=1;
        }
    }
    if(month>12)
    {
        month=1;
        year++;
    }
    return *this;
}

Date &Date::operator--()
{
    day--;
    bool ifRun;
    int runYear[]={31,29,31,30,31,30,31,31,30,31,30,31},pingYear[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
        ifRun=true;
    else ifRun=false;
    if(ifRun)
    {
        if(day<=0)
        {
            month--;
            day=runYear[month-1];
        }
    }
    else
    {
        if(day<=0)
        {
            month--;
            day=runYear[month-1];
        }
    }
    if(month<=0)
    {
        month=12;
        year--;
    }
    return *this;
}

Date Date::operator+=(int days)
{
    int ty=year,tm=month,td=day;
    int md[]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(days>0)
    {

            if((ty%4==0&&ty%100!=0)||ty%400==0)
                md[1]=29;
            else
                md[1]=28;
            if(td<md[tm-1])
                {
                    td++;
                    days--;
                }
            else
                {
                    td=1;
                    tm++;
                    days--;
                }
            if(tm>12)
                {
                    ty++;
                    tm=1;
                }
    }
    year=ty;month=tm;day=td;
    return *this;
}

Date Date::operator+=(const Date &dd)
{
    year+=dd.year;
    month+=dd.month;
    day+=dd.day;
    Date::formalize();
    return *this;
}

Date Date::operator-=(int days)
{
    int ty=year,tm=month,td=day;
    int md[]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(days>0)
    {
        if((ty%4==0&&ty%100!=0)||ty%400==0)
            md[1]=29;
        else
            md[1]=28;
        if(td>1)
        {
            td--;
            days--;
        }
        else
        {
            td=md[tm-2];
            tm--;
            days--;
        }
        if(tm<1)
        {
            ty--;
            tm=12;
        }
    }
    year=ty;month=tm;day=td;
    return *this;
}

Date Date::operator-=(const Date &dd)
{
    year-=dd.year;
    month-=dd.month;
    day-=dd.day;
    Date::formalize();
    return *this;
}

bool operator<(const Date &one, const Date &two)
{
    if(one.year<two.year)return true;
    else if(one.year==two.year)
        if(one.month<two.month)return true;
        else if(one.month==two.month)
            if(one.day<two.day)return true;
    return false;
}

ostream & operator<<(ostream & os,const Date &date)
{
    char *monthName[]={"January","February","March","April","May","June","July","Augest","September","October","November","December"};
    os<<monthName[date.month-1]<<"  "<<date.day<<", "<<date.year;
    return os;
}

void Date::formalize()
{
    bool ifRun;
    int mdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(month>12)
    {
        month-=12;
        year++;
    }
    while(month<=0)
    {
        month+=12;
        year--;
    }
    if((year%4==0&&year%100!=0)||year%400==0)
            mdays[1]=29;
    else mdays[1]=28;
    while(day>mdays[month-1])
    {
        day-=mdays[month-1];
        month++;
        if(month>12)
        {
            year++;
            month-=12;
            if((year%4==0&&year%100!=0)||year%400==0)
                mdays[1]=29;
            else mdays[1]=28;
        }
    }
    while(day<=0)
    {
        month--;
        if(month<=0)
        {
            month+=12;
            year--;
        }
        day+=mdays[month-1];
        if(month==0)
        {
            year--;
            month=12;
            if((year%4==0&&year%100!=0)||year%400==0)
                mdays[1]=29;
            else mdays[1]=28;
        }
    }

}
