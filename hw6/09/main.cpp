#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    teacher t1(1,"Kevin"),t2(2,"Klay");
    student s1(3,"Stephan"),s2(4,"Mili");
    cout<<"Kevin ";
    t1.bookborrow(12);
    t1.bookborrow(44);
    cout<<"Klay ";
    t2.bookborrow(3);
    cout<<"Stephan ";
    s1.bookborrow(5);
    cout<<"Mili ";
    s2.bookborrow(4);
    cout<<endl;
    display(readers);
    cout<<endl;
    cout<<"kevin ";
    t1.bookreturn(12);
    cout<<endl;
    display(readers);
}
