#include <iostream>
#include "timec.h"

using namespace std;

int main()
{
    timec t1(1999,2,12,20,12,44),t2(0,0,365,0,0,0),t3(2011,12,31,23,59,59),t4(2011,3,1,0,0,0);
    cout<<"Time 1 is: "<<t1<<endl;
    cout<<"Time 2 is: "<<t2<<endl;
    cout<<"Time 1+=Time 2, Time 1 is: ";
    t1+=t2;
    cout<<t1<<endl;
    cout<<"Time 1++: "<<t1++<<endl;
    cout<<"Time 1: "<<t1<<endl;
    cout<<"++Time 1: "<<++t1<<endl;
    cout<<"Time 1: "<<t1<<endl;
    cout<<"Time 3: "<<t3<<endl;
    cout<<"++Time 3: "<<++t3<<endl;
    cout<<"--Time 3: "<<--t3<<endl;
    cout<<"Time 4: "<<t4<<endl;
    cout<<"--Time4: "<<--t4<<endl;
}
