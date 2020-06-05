#ifndef mySet_cpp
#define mySet_cpp
#include "mySet.h"

template <class T>
mySet<T>::mySet(const mySet &a_set)
{
    elements=a_set.elements;
    storage=new T[elements];
    for(int i=0;i<elements;i++)
        storage[i]=a_set.storage[i];
}

template <class T>
void mySet<T>::append(T ele)
{
    T *temp=new T[elements];
    for(int i=0;i<elements;i++)
        temp[i]=storage[i];
    elements+=1;
    storage=new T[elements];
    for(int i=0;i<elements-1;i++)
        storage[i]=temp[i];
    storage[elements-1]=ele;
}

template <class T>
void mySet<T>::del(int d)
{
    T *temp=new T[elements];
    for(int i=0;i<elements;i++)
        temp[i]=storage[i];
    elements-=1;
    storage=new T[elements];
    int j=0;
    for(int i=0;i<elements+1;i++)
    {
        if(i!=d)
        {
            storage[j]=temp[i];
            j++;
        }
    }
}

template <class T>
T & mySet<T>::operator[](int d)
{
    if(d<0||d>=elements) cout<<"out of range!";
    return storage[d];
}

template <class T>
mySet<T> myint(mySet<T> s1,mySet<T> s2)
{
    mySet<T> ts1=s1,ts2=s2;
    int maxlen=max(s1.elements,s2.elements);
    T *temp=new T[maxlen];
    int k=0;
    for(int i=0;i<ts1.elements;i++)
    {
        for(int j=0;j<ts2.elements;j++)
        {
            if(ts1.storage[i]==ts2.storage[j])
                {
                    temp[k]=ts1.storage[i];
                    k++;
                    ts1.del(i);
                    ts2.del(j);
                }
        }
    }
    mySet<T> newone;
    newone.elements=k;
    for(int i=0;i<k;i++)
        newone.storage[i]=temp[i];
    return newone;
}

template <class T>
bool if_in(T *a,T b,int c)
{
    for(int i=0;i<c;i++)
    {
        if(b==a[i]) return true;
    }
    return false;
}

template <class T>
mySet<T> myuni(mySet<T> s1,mySet<T> s2)
{
    int maxlen=s1.elements+s2.elements;
    T *temp=new T[maxlen];
    int k=0;
    for(int i=0;i<s1.elements;i++)
    {
        temp[i]=s1.storage[i];
        k++;
    }
    for(int j=0;j<s2.elements;j++)
    {
        if(!if_in(temp,s2.storage[j],k))
        {
            temp[k]=s2.storage[j];
            k++;
        }
    }
    mySet<T> newone;
    newone.elements=k;
    newone.storage=new T[k];
    for(int i=0;i<k;i++)
        newone.storage[i]=temp[i];
    return newone;
}

template <class T>
ostream &operator<<(ostream &os,const mySet<T> &s)
{
    for(int i=0;i<s.elements;i++)
        os<<s.storage[i];
    return os;
}

#endif
