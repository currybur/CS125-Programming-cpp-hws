#include <iostream>

using namespace std;

int main()
{
    int n,p,c=0,s=1;
    cout<<"Input number and prime factor: ";
    cin>>n>>p;
    int r=n;
    for(int i=0;i<r;i++)
    {
        s*=n;
        n--;
    }
    cout<<r<<"!=";
    cout<<s<<endl;
    while(s%p==0)
    {
        c++;
        s/=p;
    }
    cout<<r<<"!"<<" contains "<<c<<" '"<<p<<"'s"<<endl;
    return 0;
}
