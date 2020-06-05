#include <iostream>

using namespace std;

int main(){
bool num[2000000]={0};
int i,j,n,m;
cin>>n;
for(i=2;i*i<=n;i++){
    for(j=i;j*i<=n;j++){
        num[j*i-1]=1;
    }
}
for(m=0;m<n;m++){
    if(num[m]==0)cout<<m+1<<endl;
}
}



