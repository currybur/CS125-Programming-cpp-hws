#include <iostream>
#include <cmath>
#include "safeint.h"
using namespace std;



int main()
{
    safeint a(pow(2,31)-2),b(2);
    cout<<"a "<<a<<endl<<"b "<<b<<endl;
    cout<<"a+b=";
    try
    {
        cout<<a+b<<endl;
    }
    catch(outofrange){cout<<"Out of range!"<<endl;}
}
