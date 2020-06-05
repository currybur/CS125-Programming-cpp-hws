#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;

    class timec
    {
    private:
        int hour;
        int minu;
        int secon;
    public:
        timec(int h=0,int m=0, int s=0){hour=h;minu=m;secon=s;}
        void setc(int h,int m, int s){hour=h;minu=m;secon=s;};
        void show(){cout<<"hour: "<<hour<<"minute: "<<minu<<"second: "<<secon;}
    };


#endif // HEAD_H_INCLUDED
