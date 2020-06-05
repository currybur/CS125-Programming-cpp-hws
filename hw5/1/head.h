#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include <Cstring>
    using namespace std;

    class LongLongint
    {
    private:
        int lenth;
        char *number;
    public:
        LongLongint(char lli[],int l);
        LongLongint(const LongLongint &num);
        ~LongLongint(){delete [] number;}
        void add(char lli[],int l);//add a number in char* form
        void display() const;
    };


#endif // HEAD_H_INCLUDED
