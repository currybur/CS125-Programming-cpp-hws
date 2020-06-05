#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    Matrix m1(3,3),m2(3,3),m3,m4;
    m1.setMatrix();
    m2.setMatrix();
    cout<<"m1 is: \n"<<m1<<endl;
    cout<<"m2 is: \n"<<m2<<endl;
    m3=m1+m2;
    m4=m1*m2;
    cout<<"m1 + m2 = \n"<<m3<<endl;
    cout<<"m1 * m2 = \n"<<m4<<endl;
    cout<<"transpose of m1 is: \n"<<m1.trsp()<<endl;
}
