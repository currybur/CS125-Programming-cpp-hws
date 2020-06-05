#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;

    class cpl
    {
        double real;
        double imag;
        friend cpl operator+(const cpl &c1, const cpl &c2);
        friend cpl operator*(const cpl &c1, const cpl &c2);
    public:
        cpl(double r=0, double i=0):real(r),imag(i){}
        void display();
    };


#endif // HEAD_H_INCLUDED
