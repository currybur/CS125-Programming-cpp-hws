#include <iostream>
#include <string>
using namespace std;

int int_pow(int a, int b){
      int r=1;
       for(int i=0;i<b;i++){
         r*=a;
    }
    return r;
}

int string_int(string a){
int r=0;
for(int i=0;i<a.size();i++)
    r+=(a[i]-'0')*int_pow(10,a.size()-1-i);
return r;
}

int main(){
string n1,n2;
char expr[100],sign[]={'+','-','*','/'};
int result,cal;
cout<<"Enter the expression: ";
cin>>expr;
for(int i=0;i<100;i++){
    if(expr[i]!='+'&&expr[i]!='-'&&expr[i]!='*'&&expr[i]!='/')n1+=expr[i];
    else if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/'){
        for(int m=0;m<4;m++)
            if(sign[m]==expr[i])cal=m;
        for(int j=0;j<100;j++){
            if(expr[i+j+1]!='\0')n2+=expr[i+j+1];
            else break;
        }
        break;
    }
}

switch(cal){
case 0:result=string_int(n1)+string_int(n2);break;
case 1:result=string_int(n1)-string_int(n2);break;
case 2:result=string_int(n1)*string_int(n2);break;
case 3:result=string_int(n1)/string_int(n2);break;
}
cout<<"Result is: "<<result<<endl;


}
