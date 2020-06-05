#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;

    class rect
    {
    protected:
        double chang,kuan;
    public:
        rect(double x=0, double y=0){chang=x;kuan=y;}
        virtual void display(){cout<<"chang="<<chang<<"\nkuan="<<kuan<<endl;}
        double circu(){return chang*2+kuan*2;}
        double area(){return chang*kuan;}
    };

    class squ:public rect
    {
    private:
        double bianchang;
    public:
        void display(){cout<<"bianchang="<<bianchang<<endl;}
        squ(int x):rect(x,x){bianchang=x;}
    };

#endif // HEAD_H_INCLUDED
