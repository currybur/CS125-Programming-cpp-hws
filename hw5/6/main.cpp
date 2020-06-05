#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    Timet a(1,12,35),b(1,7,5),c,d;
    cout<<"Time 1:";
    a.display();
    cout<<"Time 2:";
    b.display();
    cout<<"Time 1+time2, time 1 becomes:";
    a+=b;
    a.display();
    cout<<"Time 1 right++:";
    c=a++;
    c.display();
    a--;
    cout<<"Time 1 left ++:";
    d=++a;
    d.display();
    cout<<"The same applies to time-- and --time."<<endl;
}
