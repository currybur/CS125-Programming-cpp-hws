#include "head.h"

Matrix::Matrix(int i, int j)
{
    storage=new int[i*j];
    row=i;
    column=j;
}

Matrix::Matrix(const Matrix &m)
{
    row=m.row;
    column=m.column;
    storage=new int[row*column];
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            storage[i*column+j]=m.storage[i*column+j];
}

void Matrix::setMatrix()
{
    cout<<"Input the matrix in the order of left to right and up to down:"<<endl;
    for(int n=0;n<row;n++)
        for(int m=0;m<column;m++)
            cin>>storage[n*column+m];
}

int Matrix::operator()(int r, int c)
{
    return storage[r*column+c];
}

Matrix operator+(const Matrix &m1,const Matrix &m2)
{
    Matrix tmp;
    tmp.row=m1.row;
    tmp.column=m1.column;
    tmp.storage=new int[tmp.row*tmp.column];
    for(int i=0;i<tmp.row;i++)
        for(int j=0;j<tmp.column;j++)
            tmp.storage[i*tmp.column+j]=m1.storage[i*tmp.column+j]+m2.storage[i*tmp.column+j];
    return tmp;
}

Matrix operator*(const Matrix &m1,const Matrix &m2)
{
    Matrix tmp;
    tmp.row=m1.row;
    tmp.column=m2.column;
    tmp.storage=new int[m1.row*m2.column];
    for(int n=0;n<tmp.row;n++)
        for(int m=0;m<tmp.column;m++)
        {
            int num=0,k=0,l=0;
            while(k<m1.column)
            {
                num+=m1.storage[n*m1.column+k]*m2.storage[l*m2.column+m];
                k++;
                l++;
            }
            tmp.storage[n*tmp.column+m]=num;
        }
    return tmp;
}

Matrix &Matrix::operator=(const Matrix&m)
{
    if(this==&m)return *this;
    delete []storage;
    row=m.row;
    column=m.column;
    storage=new int[row*column];
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            storage[i*column+j]=m.storage[i*column+j];
    return *this;
}

Matrix Matrix::trsp()
{
    Matrix tmp;
    tmp.row=column;
    tmp.column=row;
    tmp.storage=new int[column*row];
    for(int i=0;i<tmp.row;i++)
        for(int j=0;j<tmp.column;j++)
            tmp.storage[j*tmp.column+i]=storage[i*column+j];
    return tmp;
}

ostream & operator<<(ostream & os,const Matrix &m)
{
    for(int i=0;i<m.row;i++)
    {
        for(int j=0;j<m.column;j++)
        {
            os<<m.storage[i*m.column+j]<<",";
        }
        os<<endl;
    }
    return os;
}
