#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include <Cstring>
    using namespace std;

    class LongLongint
    {
        friend LongLongint operator+(const LongLongint&n1,const LongLongint&n2);
    protected:
        int lenth;
        char *number;
    public:
        LongLongint(char lli[]={},int l=0);
        LongLongint(const LongLongint &num);
        ~LongLongint(){delete [] number;}
        LongLongint &operator=(const LongLongint &num);
        void display() const;
    };

    class signed_lli:public LongLongint
    {
        bool sign;
        friend signed_lli operator+(const signed_lli&n1,const signed_lli&n2);
        friend signed_lli operator-(const signed_lli&n1,const signed_lli&n2);
        friend ostream & operator<<(ostream & os,const signed_lli &num);
        friend istream & operator>>(istream & is, signed_lli &num);
    public:
        signed_lli(char lli[]={}, int l=0, bool s=1):LongLongint(lli,l){sign=s;}
        signed_lli(const signed_lli &num);
        signed_lli &operator=(const signed_lli &num);

    };


#endif // HEAD_H_INCLUDED
