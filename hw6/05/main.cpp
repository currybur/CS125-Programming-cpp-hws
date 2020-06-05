#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    myStack s(10),s2(1);
    cout<<"Push in 15,12,6."<<endl;
    s.push(15);
    s.push(12);
    s.push(6);
    cout<<"pop out:"<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<"continue to pop:"<<endl;
    s.pop();
    cout<<endl;
    cout<<"Push 2 elements into a size-1 stack: "<<endl;
    s2.push(2);
    s2.push(1);
    return 0;
}
