#ifndef SHIJIAN_H_INCLUDED
#define SHIJIAN_H_INCLUDED
    #include <iostream>
    using namespace std;

    class Timet
    {
        friend ostream & operator<<(ostream & os,const Timet &t);
    protected:
        double hour,minute,second;

    public:
        Timet(double h=0, double m=0, double s=0):hour(h),minute(m),second(s){}
        Timet operator+=(const Timet &t);
        Timet operator-=(const Timet &t);
        Timet &operator++();
        Timet operator++(int);
        Timet &operator--();
        Timet operator--(int);
        void formalize();
    };


#endif // SHIJIAN_H_INCLUDED
