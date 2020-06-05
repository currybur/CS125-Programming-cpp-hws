#include <iostream>
#include "head.h"
using namespace std;


int main()
{
    comp a, b, c, d;
    cout<<"Input one complex number by real and imaginary parts.";
    cin>>a.real>>a.imag;
    cout<<"a is: ";
    a.show();
    cout<<"Input another complex number by real and imaginary parts.";
    cin>>b.real>>b.imag;
    cout<<"b is:  ";
    b.show();
    cout<<"The sum of a and b: ";
    c.add(a,b);
    c.show();
    cout<<"The product of a and b: ";
    d.multi(a,b);
    d.show();
}
