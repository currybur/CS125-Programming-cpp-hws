#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include <cmath>
    using namespace std;

    extern int tasks,alives;

    class myVector
    {
        friend myVector operator+(const myVector &v1,const myVector &v2);
        friend ostream & operator<<(ostream & os,const myVector &vect);
        friend istream & operator>>(istream & is, myVector &vect);
        friend bool operator==(const myVector &v1 , const myVector &v2);
        friend bool operator!=(const myVector &v1 , const myVector &v2);
    private:
        int dim,*projs;
    public:
        myVector(int d=0,int *p={});
        myVector(const myVector &v);
        ~myVector(){delete[]projs;alives--;}
        int & operator[](int index);
        myVector &operator=(const myVector & vect);
        myVector & operator++();
        myVector operator++(int);
        myVector &operator--();
        myVector operator--(int);
        operator double () const;
    };


#endif // HEAD_H_INCLUDED
