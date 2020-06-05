#include <iostream>

using namespace std;

struct date
{
    int year;
    int month;
    int day;
};

date timeflies(date origin, int days)
{
    date newdate;
    int ty=origin.year,tm=origin.month,td=origin.day;
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
    newdate.year=ty;
    newdate.month=tm;
    newdate.day=td;
    return newdate;
}

date getdate(char *a)
{
    date origin;
    int year,month,day;
    year=(a[0]-'0')*1000+(a[1]-'0')*100+(a[2]-'0')*10+(a[3]-'0');
    month=(a[4]-'0')*10+a[5]-'0';
    day=(a[6]-'0')*10+a[7]-'0';
    origin.year=year;
    origin.month=month;
    origin.day=day;
    return origin;
}

void show(date a)
{
    if(a.year/1000>9)cout<<"out of limitation!";
    else
    {
        if(a.year/10==0)cout<<"000"<<a.year;
        else if(a.year/100==0)cout<<"00"<<a.year;
        else if(a.year/1000==0)cout<<"0"<<a.year;
        else cout<<a.year;
        if(a.month/10==0)cout<<"0"<<a.month;
        else cout<<a.month;
        if(a.day/10==0)cout<<"0"<<a.day;
        else cout<<a.day;
    }
}


int main()
{
    char a[9];
    int n;
    date origin,newdate;
    cout<<"Input the original date and days: ";
    cin>>a>>n;
    origin=getdate(a);
    newdate=timeflies(origin,n);
    cout<<"Now we are in: \n";
    show(newdate);

}
