#include <iostream>

using namespace std;

int hmd(int a, int b, int c);

int main()
{
int n,i,days,all_days=0,month,mon=0,tue=0,wed=0,thu=0,fri=0,sar=0,sun=0;
cout<<"Enter n: ";
cin>>n;
for(i=0;i<n;i++){
    all_days+=hmd(1900+i,12,31);
    for(month=1;month<=12;month++){
        days=hmd(1900+i,month,13);
        switch(((days+all_days)-hmd(1900+i,12,31))%7){
        case 0:sun++;break;
        case 1:mon++;break;
        case 2:tue++;break;
        case 3:wed++;break;
        case 4:thu++;break;
        case 5:fri++;break;
        case 6:sar++;break;
        }
    }
}
cout<<mon<<endl<<tue<<endl<<wed<<endl<<thu<<endl<<fri<<endl<<sar<<endl<<sun<<endl;
}

int hmd(int year, int month, int day){
int run,dayNum;
if((year%4==0&&year%100!=0)||(year%400==0))run=1;
else run=0;
if(run==1){
        if(month>2){
            dayNum=31*(month-1)+day-(4*month+23)/10+1;
        }
        else dayNum=31*(month-1)+day;
    }
    else{
        if(month>2){
            dayNum=31*(month-1)+day-(4*month+23)/10;
        }
        else dayNum=31*(month-1)+day;
    }
    return dayNum;
}
