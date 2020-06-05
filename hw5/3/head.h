#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;

    class Joseph
    {
        int siz;
        int interval;
    public:
        Joseph(int n=1, int m=1):siz(n),interval(m){}
        void simulate();
    };


#endif // HEAD_H_INCLUDED
