#include <iostream>

using namespace std;

struct cpl
{
    double real;
    double imag;
};

void show(cpl num)
{
    cout<<num.real<<"+("<<num.imag<<"i)"<<endl;
}

cpl add(cpl &num1,cpl &num2)
{
    cpl result;
    result.real=num1.real+num2.real;
    result.imag=num1.imag+num2.imag;
    return result;
}

cpl multi(cpl &num1, cpl &num2)
{
    cpl result;
    result.real=num1.real*num2.real-num1.imag*num2.imag;
    result.imag=num1.real*num2.imag+num1.imag*num2.real;
    return result;
}

int main()
{
    cpl num1,num2,resadd,restime;
    cout<<"Input the first complex: "<<endl;
    cin>>num1.real>>num1.imag;
    show(num1);
    cout<<"Input the second complex: "<<endl;
    cin>>num2.real>>num2.imag;
    show(num2);
    resadd=add(num1,num2);
    restime=multi(num1,num2);
    cout<<"Sum:";
    show(resadd);
    cout<<"Product: ";
    show(restime);

}
