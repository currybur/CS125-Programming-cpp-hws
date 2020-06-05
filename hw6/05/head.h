#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;

    class myStack
    {
    private:
        int *arr;
        int datasize;
        int atop;
        int full;
        int emp;
    public:
        myStack(int x=100);
        int pop();
        int push(int);

    };


#endif // HEAD_H_INCLUDED
