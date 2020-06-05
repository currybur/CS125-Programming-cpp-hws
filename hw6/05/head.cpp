#include "head.h"

myStack::myStack(int x)
{
    arr=new int[x];
    atop=0;
    datasize=x;
    full=x;
    emp=0;
}

int myStack::pop()
{
    if(atop==emp)
    {cout<<"Empty!";return -1;}
    atop--;
    return arr[atop];
}

int myStack::push(int x)
{
    if(atop==full)
    {cout<<"Full!";return -1;}
    arr[atop]=x;
    atop++;
    return x;
}

