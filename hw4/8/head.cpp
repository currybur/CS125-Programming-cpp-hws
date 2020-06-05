#include "head.h"

void comp::add(const comp &a, const comp &b)
{
    real=a.real+b.real;
    imag=b.imag+b.imag;
}

void comp::multi(const comp &a, const comp &b)
{
    real=a.real*b.real-a.imag*b.imag;
    imag=a.real*b.imag+a.imag*b.real;
}

void comp::show()
{
    cout<<real<<"+("<<imag<<"i)"<<endl;
}
