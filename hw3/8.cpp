#include <iostream>

using namespace std;

void getdate(int *a);

int main()
{
    int days;
    cout<<"Enter days: ";
    cin>>days;
    getdate(&days);
    return 0;
}

void getdate(int *a)
{
    int month=1,days=*a,monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<12;i++)
    {
        days-=monthdays[i];
        if(days<=0)
        {
            days+=monthdays[i];
            break;
        }
        else
            month+=1;
    }
    cout<<"DATA:\n"<<"Month: "<<month<<"\tDay: "<<days;
}

