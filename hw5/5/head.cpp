#include "head.h"

void paixu(int N, studentData data[])
{
    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++)
        {
            if(data[i].tol<data[j].tol)
            {
                studentData temp;
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
            else if(data[i].tol==data[j].tol)
            {
                if(data[i].chi<data[j].chi)
                {
                    studentData temp;
                    temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
                else if(data[i].chi==data[j].chi)
                {
                    if(data[i].mat<data[j].mat)
                    {
                        studentData temp;
                        temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;
                    }
                    else if(data[i].mat==data[j].mat)
                    {
                        if(data[i].eng<data[j].eng)
                        {
                            studentData temp;
                            temp = data[i];
                            data[i] = data[j];
                            data[j] = temp;
                        }
                        else if(data[i].eng==data[j].eng)
                        {
                            if(comp_char(data[i].name,data[j].name))
                            {
                                studentData temp;
                                temp = data[i];
                                data[i] = data[j];
                                data[j] = temp;
                            }
                            else continue;
                        }
                    }
                }
            }
        }
}

void fetch(studentData datu)
{
    cout<<datu.name<<endl<<datu.tol<<endl;
}

void studentData::ini(char n[], double c, double m, double e)
{
    tol = c + m + e;
    strcpy(name,n);
    chi = c;
    mat = m;
    eng = e;
}


bool comp_char(char *a, char *b)
{
    int lena = strlen(a),lenb = strlen(b);
    for(int i=0;i<min(lena,lenb);i++)
    {
        if(a[i]<b[i])return true;
        else if(a[i]>b[i])return false;
        else continue;
    }
    if(lena<lenb)return true;
    else return false;
}
