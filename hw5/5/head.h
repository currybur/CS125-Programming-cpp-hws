#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include <Cstring>
    using namespace std;

    class studentData
    {
        double tol,chi,mat,eng;
        char name[30];
    public:
        studentData(char n[]="", double c=0, double m=0, double e=0):chi(c),mat(m),eng(e)
        {
            strcpy(name,n);
            tol = c + m + e;
        }
        void ini(char *n, double c, double m, double e);
        friend void paixu(int N,studentData data[]);
        friend void fetch(studentData a);
    };

    extern studentData data[100];
    bool comp_char(char *a, char *b);

#endif // HEAD_H_INCLUDED
