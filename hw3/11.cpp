#include <iostream>

using namespace std;

double binroot(double (*fct)(double), double x1, double x2);
double fct1(double x);
double fct2(double x);

int main()
{
    double (*fun1)(double),(*fun2)(double);
    fun1=fct1;
    fun2=fct2;
    cout<<binroot((*fun1),0.0,2.0)<<"   "<<binroot((*fun2),1.0,2.0);
}

double binroot(double (*fct)(double), double x1, double x2)
//Be careful that f(x1) and f(x2) have  opposite signal. Fix that f(x1) is positive.
{
    double accu=0.001;//Fix accuracy as 0.001.
    double mid;
    mid=(x1+x2)/2;
    if(fct(mid)-0<=accu||0-fct(mid)<=accu)return mid;
    else
    {
        if(fct(mid)-0>accu)return binroot(fct,mid,x2);
        else return binroot(fct,x1,mid);
    }
}


double fct1(double x)
{
    double y;
    y=x+1;
    return y;
}

double fct2(double x)
{
    double y;
    y=x*x*x+2*x*x-7*x+3;
    return y;
}
