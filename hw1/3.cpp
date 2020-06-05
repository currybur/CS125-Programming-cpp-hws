//难度选择：任意两个非负整数

#include <iostream>

using namespace std;

int main()
{
int a,b,i;
cout<<"请输入双方比分： "<<endl;
cout<<"甲： ";
cin>>a;
cout<<"乙： ";
cin>>b;
if(a>=0&&b>=0){
if(a<10||b<10){
    if(a==11)cout<<"甲获胜了。"<<endl;
    else if(b==11) cout<<"乙获胜了。"<<endl;
    else if(a>11||b>11)cout<<"非法的比分。"<<endl;
    else cout<<"比赛继续。"<<endl;
}
else if(a>=10&&b>=10){
    if(a-b==2)cout<<"甲获胜了。"<<endl;
    else if(b-a==2)cout<<"乙获胜了."<<endl;
    else cout<<"比赛继续。"<<endl;
}
else cout<<"非法的比分。"<<endl;
}
else cout<<"非法的比分。"<<endl;
return 0;
}
