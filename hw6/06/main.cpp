#include <iostream>
#include "head.h"
using namespace std;

int main()
{
    rect cfx(3,4);
    squ zfx(5);
    cout<<"Changfangxing\n";
    cfx.display();
    cout<<"zhouchang = "<<cfx.circu()<<endl;
    cout<<"mianji = "<<cfx.area()<<endl;
    cout<<"\nZhengfangxing\n";
    zfx.display();
    cout<<"zhouchang = "<<zfx.circu()<<endl;
    cout<<"mianji = "<<zfx.area()<<endl;
    return 0;
}
