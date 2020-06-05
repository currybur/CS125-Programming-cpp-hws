#include <iostream>
#include "head.h"
using namespace std;

studentData data[100];

int main()
{
    int N,k;
    cout<<"Input the number of students: ";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int a,b,c;
        char e[30];
        cout<<"Input chinese, math, english score and name:";
        cin>>a>>b>>c>>e;
        data[i].ini(e,a,b,c);
    }
    paixu(N,data);
    while(k!=0)
        {
            cout<<"Which one being searched(input 0 to exit):";
            cin>>k;
            fetch(data[k-1]);
        }
}



