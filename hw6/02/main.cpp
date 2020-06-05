#include <iostream>
#include "head.h"
using namespace std;

int main()
{
    int a[]={1,2,3,4},b[]={4,2,1};
    myVector v1,v2(4,a),v3,v4=v2;
    double l;
    cout<<"Input v1:"<<endl;
    cin>>v1;
    cout<<"v1:"<<v1;
    cout<<"v2:"<<v2;
    cout<<"v1[1]="<<v1[1]<<endl;
    cout<<"The result of v1!=v2 is:"<<((v1!=v2)?"true":"false")<<endl;
    cout<<"Initialized v4=v2,v4:"<<v4;
    v3=v1;
    cout<<"v3=v1,v3:"<<v3;
    cout<<"The result of v3==v1 is:"<<((v1==v3)?"true":"false")<<endl;
    l=v3;
    cout<<"l=|v3|,l="<<l<<endl;
    cout<<"v2++:"<<v2++;
    cout<<"v2:"<<v2;
    cout<<"++v2:"<<++v2;
    cout<<"v2:"<<v2;
    cout<<"v4:"<<v4;
    cout<<"v2+v4="<<v2+v4;
    cout<<"All vectors:"<<tasks<<endl;//v2++ and v2+v4 created two temperate vectors
    cout<<"Alive vectors:"<<alives<<endl;
}
