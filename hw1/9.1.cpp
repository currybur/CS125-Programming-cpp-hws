//第一套体系平均最少票数：4.24242
//第二套体系平均最少票数：3.32323

#include <iostream>

using namespace std;


int main()
{
int money,yi,wu,shi,ershi,wushi,shiliu,ershisan,sanshisan,whole_num,num,all_num,c;
double t=0,m=0;
whole_num=0;
all_num=0;
for(money=1;money<=99;money++){
    c=99;
    for(yi=0;yi<=money;yi++)
        for(wu=0;wu<=(money-yi)/5;wu++)
            for(shi=0;shi<=(money-yi-5*wu)/10;shi++)
                for(ershi=0;ershi<=(money-yi-5*wu-10*shi)/20;ershi++)
                  for(wushi=0;wushi<=(money-yi-5*wu-10*shi-20*ershi)/50;wushi++){
                    if(money-yi-5*wu-10*shi-20*ershi-50*wushi==0){
                        //cout<<money<<"元情况:\n"<<yi<<endl<<wu<<endl<<shi<<endl<<ershi<<endl<<wushi<<endl<<"张"<<endl;
                        num=yi+wu+shi+ershi+wushi;
                        if(num<=c)c=num;
                        }
                  }
        whole_num+=c;
        t++;
}
cout<<"第一套体系平均最少票数："<<whole_num/t<<endl;

for(money=1;money<=99;money++){
    c=99;
    for(yi=0;yi<=money;yi++)
        for(wu=0;wu<=(money-yi)/5;wu++)
            for(shiliu=0;shiliu<=(money-yi-5*wu)/16;shiliu++)
                for(ershisan=0;ershisan<=(money-yi-5*wu-16*shiliu)/23;ershisan++)
                  for(sanshisan=0;sanshisan<=(money-yi-5*wu-16*shiliu-23*ershisan)/33;sanshisan++){
                    if(money-yi-5*wu-16*shiliu-23*ershisan-33*sanshisan==0){
                        //cout<<money<<"元情况:\n"<<yi<<endl<<wu<<endl<<shi<<endl<<ershi<<endl<<wushi<<endl<<"张"<<endl;
                        num=yi+wu+shiliu+ershisan+sanshisan;
                        if(num<=c)c=num;
                }
            }
         all_num+=c;
         m++;
}
cout<<"第二套体系平均最少票数："<<all_num/m<<endl;
return 0;
}
