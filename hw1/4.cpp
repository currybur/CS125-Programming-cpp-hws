#include <iostream>

using namespace std;

int main()
{
int month,day,year,y,run,dayNum;
cout<<"Please enter a date in the form of month,day and year."<<endl;
cin>>month>>day>>year;
if((year%4==0&&year%100!=0)||(year%400==0))run=1;
else run=0;
if(month<=12){
switch(month)
   {case 1: if(day<=31)y=1;
             else y=0;
             break;
    case 2 : if(run==1){
                if(day<=29)y=1;
                else y=0;}
             else{if(day<=28)y=1;
                  else y=0;}
             break;
     case 3: if(day<=31)y=1;
             else y=0;
             break;
    case 4: if(day<=30)y=1;
            else y=0;
            break;
    case 5: if(day<=31)y=1;
             else y=0;
             break;
    case 6: if(day<=30)y=1;
            else y=0;
            break;
    case 7: if(day<=31)y=1;
             else y=0;
             break;
    case 8: if(day<=31)y=1;
             else y=0;
             break;
    case 9 :if(day<=30)y=1;
            else y=0;
            break;
    case 10: if(day<=31)y=1;
             else y=0;
             break;
    case 11:if(day<=30)y=1;
            else y=0;
            break;
    case 12: if(day<=31)y=1;
             else y=0;
             break;
    }
}
else y=0;
if(y==1){
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
cout<<"There has been "<<dayNum<<" days in "<<year<<endl;
}
else cout<<"Illegal date."<<endl;
return 0;
}

