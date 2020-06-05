#include <iostream>
#include <cmath>
#include <cstdlib>   //包含伪随机数生成函数
#include <ctime>     //包含取系统时间的函数

using namespace std;

int main()
{
int j,i,direction,n,m;
double lenth,whole_len,up,dow,rig,lef;
//cout<<"Please enter steps of a walk and times to operate."<<endl;
//cin>>n>>m;
srand(time(NULL));
m=1000;
for(n=1;n<=50;n++){
  whole_len=0;
for(j=1;j<=m;j++){
  up=0;
  dow=0;
  rig=0;
  lef=0;
  for(i=1;i<=n;i++){
  direction=rand()%4;
    switch(direction){
     case 0:up++;break;
     case 1:dow++;break;
     case 2:rig++;break;
     case 3:lef++;break;
    }
    //cout<<"direction:"<<direction<<endl;
  }
  lenth=sqrt(pow(up-dow,2)+pow(lef-rig,2));
  //One walk.
whole_len+=lenth;
}
cout<<whole_len/m<<endl;
}
return 0;
}
