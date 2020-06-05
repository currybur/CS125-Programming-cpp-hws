#include <iostream>
#include "head.h"
using namespace std;

int main()
{
    cpl a(1,2),b(5,3),c,d;
    cout<<"a = ";
    a.display();
    cout<<"b = ";
    b.display();
    c = a+b;
    d = a*b;
    cout<<"a + b = ";
    c.display();
    cout<<"a*b = ";
    d.display();
}
