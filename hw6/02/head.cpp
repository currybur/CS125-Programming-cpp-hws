#include "head.h"

int tasks=0,alives=0;

myVector::myVector(int d, int *p)
{
    dim = d;
    projs=new int[dim];
    for(int i=0;i<d;i++)
        projs[i]=p[i];
    tasks++;
    alives++;
}

myVector::myVector(const myVector &v)
{
    dim=v.dim;
    projs=new int[v.dim];
    for(int i=0;i<dim;i++)
        projs[i]=v.projs[i];
    tasks++;
    alives++;
}

myVector operator+(const myVector &v1,const myVector &v2)
{
    myVector tmp;
    tmp.dim=v1.dim;
    tmp.projs=new int[tmp.dim];
    for(int i=0;i<tmp.dim;i++)
    {
        tmp.projs[i]=v1.projs[i]+v2.projs[i];
    }
    return tmp;
}

ostream & operator<<(ostream & os,const myVector &vect)
{
    for(int i=0;i<vect.dim;i++)
    {
        os<<vect.projs[i]<<",";
    }
    os<<endl;
    return os;
}

istream & operator>>(istream & is, myVector &vect)
{
    cout<<"Input the dimension: ";
    is>>vect.dim;
    delete [] vect.projs;
    vect.projs=new int[vect.dim];
    cout<<"Input the projections: ";
    for(int i=0;i<vect.dim;i++)
    {
        is>>vect.projs[i];
    }
    return is;
}

bool operator==(const myVector &v1 , const myVector &v2)
{
    if(v1.dim!=v2.dim)return false;
    for(int i=0;i<v1.dim;i++)
        if(v1.projs[i]!=v2.projs[i])return false;
    return true;
}

bool operator!=(const myVector &v1 , const myVector &v2)
{
    if(v1.dim!=v2.dim)return true;
    for(int i=0;i<v1.dim;i++)
        if(v1.projs[i]!=v2.projs[i])return true;
    return false;
}

int & myVector::operator[](int index)
{
    if(index<0||index>=dim)
    {
        cout<<"Out of limit";
    }
    else return projs[index];
}

myVector &myVector::operator=(const myVector & vect)
{
    if(this==&vect)return *this;
    delete [] projs;
    dim=vect.dim;
    projs=new int[dim];
    for(int i=0;i<dim;i++)
        projs[i]=vect.projs[i];
    return *this;
}

myVector & myVector::operator++()
{
    for(int i=0;i<dim;i++)
        projs[i]++;
    return *this;
}

myVector myVector::operator++(int x)
{
    myVector tmp=*this;
    for(int i=0;i<dim;i++)
        projs[i]++;
    return tmp;
}

myVector & myVector::operator--()
{
    for(int i=0;i<dim;i++)
        projs[i]--;
    return *this;
}

myVector myVector::operator--(int x)
{
    myVector tmp=*this;
    for(int i=0;i<dim;i++)
        projs[i]--;
    return tmp;
}

myVector::operator double () const
{
    double res,sqs=0;
    for(int i=0;i<dim;i++)
        sqs+=projs[i]*projs[i];
    res=sqrt(sqs);
    return res;
}
