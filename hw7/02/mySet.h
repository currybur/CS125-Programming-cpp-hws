#ifndef MYSET_H_INCLUDED
#define MYSET_H_INCLUDED
    #include <iostream>
    using namespace std;

    template <class T> class mySet;
    template <class T> ostream &operator<<(ostream &, const mySet<T> &);
    template <class T> mySet<T> myint(mySet<T> s1,mySet<T> s2);
    template <class T> mySet<T> myuni(mySet<T> s1,mySet<T> s2);

    template <class T>
    class mySet
    {
        friend mySet<T> myint<>(mySet<T> s1,mySet<T> s2);
        friend mySet<T> myuni<>(mySet<T> s1,mySet<T> s2);
        friend ostream &operator<<<>( ostream &, const mySet<T> &);
        T *storage;
        int elements;
    public:
        mySet(int e=0){elements=0;storage=new T[elements];}
        mySet(const mySet &a_set);
        ~mySet(){delete [] storage;}
        void append(T);
        void del(int);
        T & operator[](int);
    };


#include "mySet.cpp"
#endif // MYSET_H_INCLUDED
