//�Ѷ�ѡ�����������Ǹ�����

#include <iostream>

using namespace std;

int main()
{
int a,b,i;
cout<<"������˫���ȷ֣� "<<endl;
cout<<"�ף� ";
cin>>a;
cout<<"�ң� ";
cin>>b;
if(a>=0&&b>=0){
if(a<10||b<10){
    if(a==11)cout<<"�׻�ʤ�ˡ�"<<endl;
    else if(b==11) cout<<"�һ�ʤ�ˡ�"<<endl;
    else if(a>11||b>11)cout<<"�Ƿ��ıȷ֡�"<<endl;
    else cout<<"����������"<<endl;
}
else if(a>=10&&b>=10){
    if(a-b==2)cout<<"�׻�ʤ�ˡ�"<<endl;
    else if(b-a==2)cout<<"�һ�ʤ��."<<endl;
    else cout<<"����������"<<endl;
}
else cout<<"�Ƿ��ıȷ֡�"<<endl;
}
else cout<<"�Ƿ��ıȷ֡�"<<endl;
return 0;
}
