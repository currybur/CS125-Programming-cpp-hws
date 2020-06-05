#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
int a,b,i;
srand(time(NULL));
a = rand()%99+1;
cout<<a<<endl;
for(i=0;i<7;i++){
cout<<"Enter a number between 1-100"<<endl;
cin>>b;
if (b>a)cout<<"too big"<<endl;
else if(b<a)cout<<"too small"<<endl;
else {cout<<"right"<<endl;
break;}
}
cout<<"\nyou fail!"<<endl;
}
