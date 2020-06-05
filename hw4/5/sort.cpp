//file: sort.cpp
//includes id sort asc and total score sort des
//there is also an assist function compare_char

#include "head.h"


void idsortasc()
{
    studentT temp;
    for(int i=0;i<amofdata;i++)
        for(int j=i+1;j<amofdata;j++)
        {
            int len=leng(data[i].id);
            if(!comp_char(data[i].id,data[j].id,len,len))
            {
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
}

void scoresortdes()
{
    studentT temp;
    for(int i=0;i<amofdata;i++)
        for(int j=i+1;j<amofdata;j++)
        {
            if((data[i].chinese+data[i].math+data[i].english)<(data[j].chinese+data[j].math+data[j].english))
            {
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
}
