#include <iostream>
#include "head.h"
using namespace std;

int main()
{
    signed_lli a("441",3,1),b("1442",4,1),c;
    cout<<"Input a number with sign + or -:";
    cin>>c;
    cout<<"Your number is:"<<c<<endl;
    cout<<"number a="<<a<<endl;
    cout<<"number b="<<b<<endl;
    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
}
