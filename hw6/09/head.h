#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include <Cstring>
    using namespace std;
    class reader;

    extern  reader *readers[20];
    extern int rd;

    class reader
    {
    protected:
        int no;
        char name[20];
        int *borrowed;
        int book;
        int booknow;
    public:
        reader(int n=0, char *na="administer");
        friend void display(reader **r);
    };

    class student:public reader
    {
        enum {MAX=5};
    public:
        student(int n=0, char *na="administer"):reader(n,na){borrowed=new int[MAX];}
        void bookborrow(int);
        void bookreturn(int);
    };

    class teacher:public reader
    {
        enum {MAX=10};
    public:
        teacher(int n=0, char *na="administer"):reader(n,na){borrowed=new int[MAX];}
        void bookborrow(int);
        void bookreturn(int);
    };


#endif // HEAD_H_INCLUDED
