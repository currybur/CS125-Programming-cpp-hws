#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    char a[]="12341",b[]="331",c[]="4",d[]="513";
    long_comp com1(a,5,b,3), com2(c,1,d,3),com3;
    cout<<"number 1:";
    com1.display();
    cout<<endl;
    cout<<"number 2:";
    com2.display();
    cout<<endl;
    cout<<"num1 + num2 = ";
    (com1+com2).display();
}
