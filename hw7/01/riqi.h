#ifndef RIQI_H_INCLUDED
#define RIQI_H_INCLUDED
    #include <iostream>
    using namespace std;

    class Date
    {
        friend bool operator<(const Date &d1, const Date &d2);
        friend ostream & operator<<(ostream & os,const Date &date);
    protected:
        int year,month,day;
    public:
        Date(int m=1, int d=1, int y=1900);
        void setDate(int, int, int);
        void formalize();
        Date operator++(int);
        Date &operator++();
        Date operator--(int);
        Date &operator--();
        Date operator+=(int);
        Date operator-=(int);
        Date operator+=(const Date &dd);
        Date operator-=(const Date &dd);
    };



#endif // RIQI_H_INCLUDED
