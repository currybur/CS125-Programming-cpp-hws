#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;

    class comp
    {
    public:
        double real;
        double imag;
        void add(const comp &a, const comp &b);
        void multi(const comp &a, const comp &b);
        void show();
    };


#endif // HEAD_H_INCLUDED
