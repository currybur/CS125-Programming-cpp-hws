#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include "longint.h"
    #include <Cstring>
    using namespace std;

    class LongLongint
    {
        friend LongLongint operator+(const LongLongint&n1,const LongLongint&n2);
    private:
        int lenth;
        char *number;
    public:
        LongLongint(char lli[]={},int l=0);
        LongLongint(const LongLongint &num);
        ~LongLongint(){delete [] number;}
        LongLongint &operator=(const LongLongint &num);
        void display() const;
    };

    class long_comp
    {
        friend long_comp operator+(const long_comp &n1, const long_comp &n2);
    private:
        LongLongint real,imag;
    public:
        long_comp(char li1[]={},int l1=0, char li2[]={}, int l2=0):real(li1,l1),imag(li2,l2){}
        void display() const;
    };


#endif // HEAD_H_INCLUDED
