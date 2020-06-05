#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;


    class Matrix
    {
        friend Matrix operator+(const Matrix &m1,const Matrix &m2);
        friend Matrix operator*(const Matrix &m1,const Matrix &m2);
        friend ostream & operator<<(ostream & os,const Matrix &m);
    private:
        int row,column;
        int *storage;
    public:
        Matrix(int i=1,int j=1);
        Matrix(const Matrix &m);
        ~Matrix(){delete[]storage;}
        Matrix &operator=(const Matrix&m);
        void setMatrix();
        Matrix trsp();
        int operator()(int r, int c);
    };


#endif // HEAD_H_INCLUDED
