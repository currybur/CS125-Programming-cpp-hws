#include <iostream>
#include <Cstring>
using namespace std;


template <class T>
int getArrayLen(T& array)
{
return (sizeof(array) / sizeof(array[0]));
}

template <class T>
T my_max(T a[],int len){
T temp=a[0];
for(int i=0;i<len;i++)
        if(a[i]>temp)temp=a[i];
    return temp;
}

template <class T>
T my_min(T a[],int len){
T temp=a[0];
for(int i=0;i<len;i++)
    if(a[i]<temp)temp=a[i];
    return temp;
}

int main(){
int l[4];
char m[4];
double n[4];
int len;

cout<<"Enter 4 int: ";
for(int i=0;i<4;i++)cin>>l[i];
len=getArrayLen(l);
cout<<"Max of the 4 is: "<<my_max(l,len)<<endl<<"Min of the 4 is: "<<my_min(l,len)<<endl;

cout<<"Enter 4 char: ";
for(int i=0;i<4;i++)cin>>m[i];
len=getArrayLen(m);
cout<<"Max of the 4 is: "<<my_max(m,len)<<endl<<"Min of the 4 is: "<<my_min(m,len)<<endl;

cout<<"Enter 4 double: ";
for(int i=0;i<4;i++)cin>>n[i];
len=getArrayLen(n);
cout<<"Max of the 4 is: "<<my_max(n,len)<<endl<<"Min of the 4 is: "<<my_min(n,len)<<endl;
}
