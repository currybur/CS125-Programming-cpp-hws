#include <iostream>

using namespace std;

int pack(int *value, int *weight, int n, int c);//n : number of items;  c : carriage of backpack.

int main()
{
int value[]={5,3,4,6,9},weight[]={10,20,15,5,15},n=5,c=45;
pack(value,weight,n,c);

}

int pack(int *value, int *weight, int n, int c)
{
    int V[6][46]={0};
    for(int i=0;i<=n;i++)
        V[i][0]=0;
    for(int j=0;j<=c;j++)
        V[0][j]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=c;j++)
        {
            V[i][j]=V[i-1][j];
            if(weight[i-1]<=j)V[i][j]=max(V[i][j],V[i-1][j-weight[i-1]]+value[i-1]);
        }

    //demonstrate the result
    int x[n];
    int j=c;
    cout<<"Selected items: ";
    for(int i=n;i>0; i--)
    {
        if(V[i][j]>V[i-1][j])
        {
            x[i-1]=1;
            j-=weight[i-1];
        }
        else
            x[i-1] = 0;
    }
    for(int i=0;i<n;i++)
        if(x[i]==1)cout<<i+1<<',';
    cout<<endl;
    cout<<"Max value is: "<<V[5][45];


}
