#ifndef TIMC_H_INCLUDED
#define TIMC_H_INCLUDED
    #include <iostream>
    #include "riqi.h"
    #include "shijian.h"
    using namespace std;

    class timec:public Timet, public Date
    {
        friend ostream & operator<<(ostream & os,const timec &t);
    public:
        timec(int yr, int mh, int dy, double hr, double mt, double sd):
            Timet(hr,mt,sd),Date(mh,dy,yr){}
        timec operator+=(const timec &t);
        timec operator-=(const timec &t);
        timec &operator++();
        timec operator++(int);
        timec &operator--();
        timec operator--(int);
        void formalize();
    };


#endif // TIMC_H_INCLUDED
