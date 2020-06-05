#include "head.h"

void Joseph::simulate()
{
    bool *judge=new bool[siz];
    for(int i=0;i<siz;i++)
        judge[i]=true;
    int flag=siz,pos=-1;
    while(flag>0)
    {
        for(int j=0;j<interval;j++)
        {
            pos++;
            while(judge[pos]==false)pos++;
            if(pos>=siz)pos=0;
            while(judge[pos]==false)pos++;
        }
        flag--;
        judge[pos]=false;
        cout<<pos+1<<"  ";
    }
    delete []judge;
}
