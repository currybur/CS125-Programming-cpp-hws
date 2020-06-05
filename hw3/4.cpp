#include <iostream>

using namespace std;

const int step[8][2]={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}};

int go(int x, int y, int N);
bool finish(bool *a);

int main()
{
    int x=0,y=0,N=5;//N: rank
    cout<<"There exists "<<go(x,y,N)<<" ways";
}

int go(int x, int y, int N)
{
    static int coun=0;
    static bool pos[25]={1};//the size of position array is rank*rank
    for(int i=0;i<8;i++)
    {
        x+=step[i][0];
        y+=step[i][1];
        if(x>=0&&x<N&&y>=0&&y<N)
            if(pos[x*N+y]==0)
            {
                pos[x*N+y]=1;
                go(x,y,N);
                pos[x*N+y]=0;
            }
        x-=step[i][0];
        y-=step[i][1];


    }
    if(finish(pos))
    {
        coun++;

    }
    return coun;
}

bool finish(bool *a)
{
    int n=5,ju=0;//n: for rank
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i*n+j]==0)ju++;
    if(ju==0) return true;
    else return false;
}
