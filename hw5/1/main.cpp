#include <iostream>
#include <Cstring>
#include "head.h"
using namespace std;

int main()
{
    char a[]="123456",b[]="9165547";
    int la=strlen(a),lb=strlen(b);
    LongLongint num1(a,la);//constructing
    LongLongint num2=num1;//copy-constructing
    num1.display();
    num2.display();
    num1.add(b,lb);//adding
    num1.display();
}
