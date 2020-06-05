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
        void show(){cout<<"\nhour: "<<hour<<"\tminute: "<<minu<<"\tsecond: "<<secon;}
    };

int main()
{
    timec a;
    cout<<"Initialized time:\n";
    a.show();
    cout<<"Set time into 12:30:15 \n";
    a.setc(12,30,15);
    a.show();
}
