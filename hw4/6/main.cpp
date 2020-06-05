#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    longint a,b,c;
    cout<<"Input first long int: ";
    a.getli();
    cout<<"Input second long int: ";
    b.getli();
    c.add(a,b);
    cout<<"Sum: ";
    c.display();

}
