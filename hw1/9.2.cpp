//第一套体系平均最少票数：4.24242
//第二套体系平均最少票数：4.15152

#include <iostream>

using namespace std;

#define Yiyuan 1
#define Wuyuan 5
#define Shiyuan 10
#define Ershi 20
#define Wushi 50
#define Shiliu 16
#define Ershisan 23
#define Sanshisan 33

int main()
{
int Money,money,yi,wu,shi,es,ws,sl,ess,ss,whole1=0,whole2=0,num1,num2;
double t1=0,t2=0;
for(Money=1;Money<=99;Money++){
    money=Money;
    yi=0;wu=0;shi=0;es=0;ws=0;
    while(money>=Wushi){money-=Wushi;ws++;}
    while(money>=Ershi){money-=Ershi;es++;}
    while(money>=Shiyuan){money-=Shiyuan;shi++;}
    while(money>=Wuyuan){money-=Wuyuan;wu++;}
    while(money>=Yiyuan){money-=Yiyuan;yi++;}
    num1=ws+es+shi+wu+yi;
    whole1+=num1;
    t1++;
}
for(Money=1;Money<=99;Money++){
    money=Money;
    yi=0;wu=0;sl=0;ess=0;ss=0;
    while(money>=Sanshisan){money-=Sanshisan;ss++;}
    while(money>=Ershisan){money-=Ershisan;ess++;}
    while(money>=Shiliu){money-=Shiliu;sl++;}
    while(money>=Wuyuan){money-=Wuyuan;wu++;}
    while(money>=Yiyuan){money-=Yiyuan;yi++;}
    num2=ss+ess+sl+wu+yi;
    whole2+=num2;
    t2++;
}
cout<<"第一套体系平均最少票数："<<whole1/t1<<endl<<"第二套体系平均最少票数："<<whole2/t2<<endl;
return 0;
}
