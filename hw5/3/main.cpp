#include <iostream>
#include "head.h"
using namespace std;

int main()
{
    int a,b;
    cout<<"Input size and interval:";
    cin>>a>>b;
    Joseph j(a,b);
    j.simulate();
}

