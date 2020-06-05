#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 


int main()
{ char ch[20],ch1[4]={'+','-','*','/'};
int i,k,j,m,l,T,t,number1=0,number2=0;

cout<<"Please input:"<<endl;
cin.getline(ch,20);
l=strlen(ch);

for (i=0;i<l;++i)
   {j=0;
   for (j=0;j<4;++j)
		 if (ch[i]==ch1[j])	
				{T=i;t=j;}
   }
 


for (k=0;k<T;++k)
	{number1+=((ch[k]-'0')*pow(10,T-k-1));}
for (m=T+1;m<l;++m)
	{number2+=(ch[m]-'0')*pow(10,l-m-1);}

switch (t)
	{case 0:cout<<number1+number2<<endl;break;
	case 1:cout<<number1-number2<<endl;break;
	case 2:cout<<number1*number2<<endl;break;
	case 3:cout<<number1/number2<<endl;break;}
return 0;
}
