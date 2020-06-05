#include <iostream>

using namespace std;

int main()
{
int a,b,c,n,m,i;
cout<<"Enter the range [a,b]."<<endl;
cin>>a>>b;
for(n=a-1;n<=b-1;n+=1){
    i=0;
    m=n;
    while(m>0){
        i+=(m%10)*(m%10)*(m%10);
        m/=10;
    }
    if(i==n)cout<<n<<endl;
}
return 0;
}
