#include <iostream>

using namespace std;

bool perfectnum(int n, bool yinzi[]){
int ct=0;
for(int i=1;i*i<=n;i++)
    for(int j=i;i*j<=n;j++)
    if(i*j==n){
            if(j!=n){
                 yinzi[i-1]=1;
                 yinzi[j-1]=1;
            }
            else if(i!=j)yinzi[i-1]=1;
}
for(int k=0;k<10000;k++)
    if(yinzi[k]==1)ct+=k+1;
if(ct==n)return 1;
else return 0;
}

int main(){
int m,n;
cout<<"Pleasr enter the range with the smaller one in the front of the bigger one."<<endl;
cin>>m>>n;
for(int i=m;i<=n;i++){
        bool yinzi[10000]={0};
        if(perfectnum(i,yinzi))cout<<i<<" is a perfect number."<<endl;
}
}
