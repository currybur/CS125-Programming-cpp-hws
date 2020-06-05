//The first way to queue obviously costs 9 minutes.
//The second way costs on average 7.6 minutes.

#include <iostream>
#include "queue.h"
using namespace std;

int paidui(int a[])
{
    int i=2;
    int t=0;
    int s1,s2;
    queues<int> q1,q2;
    q1.push(a[0]);
    q2.push(a[1]);
    s1=q1.status();
    s2=q2.status();
    while(s1!=0||s2!=0)
    {
        if(i<10)
        {//when both windows are not empty
            t++;
            s1--;
            s2--;
            if(s1==0)
            {
                q1.pop(2);
                q1.push(a[i]);
                s1=q1.status();
                i++;
            }
            if(s2==0)
            {
                q2.pop(2);
                q2.push(a[i]);
                s2=q2.status();
                i++;
            }
        }
        else
        {
            t++;
            if(s1!=0)s1--;
            if(s2!=0)s2--;
        }
    }
    return t;
}

int main()
{
    int temp,average_t=0;
    for(int i=0;i<10;i++)
    {
        int customers[]={5,1,1,1,1,1,1,1,1,1};//to change the position of the 5-min person
        temp=customers[0];
        customers[0]=customers[i];
        customers[i]=temp;
        average_t+=paidui(customers);
    }
    cout<<(double)average_t/10<<endl;
}
