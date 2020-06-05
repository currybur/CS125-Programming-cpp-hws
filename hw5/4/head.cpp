#include "head.h"

cpl operator+(const cpl &c1,const cpl &c2)
{
    cpl temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

cpl operator*(const cpl &c1,const cpl &c2)
{
    cpl temp;
    temp.real = c1.real*c2.real - c1.imag*c2.imag;
    temp.imag = c1.real*c2.imag + c1.imag*c2.real;
    return temp;
}

void cpl::display()
{
    cout<<real<<"+"<<"("<<imag<<"i)"<<endl;
}
