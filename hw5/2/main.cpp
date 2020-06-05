#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    SavingAccount accc("20180506",10000),acc("20180509",2000);
    accc.display();//show present money
    accc.SetRate(0.12);//change month rate
    accc.newmoney();//calculate new money after this month
    accc.display();//show present money
    acc.display();
}
