#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include <Cstring>
    using namespace std;

    class longint
    {
        public:
        char num[101];
        //longint(){for(int i=0;i<101;i++)num[i]='0';}
        void getli();
        void add(const longint &n1, const longint &n2);
        void display();
    };


#endif // HEAD_H_INCLUDED
