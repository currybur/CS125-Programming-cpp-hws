//The first way to queue obviously costs 9 minutes.
//The second way costs on average 7.6 minutes.

#include <iostream>
using namespace std;

int paidui(int a[]){
int win[2]={0}, i=2;//win: to save the state of serve windows, i:the next person to the window.
int t=0;//time of the whole process
win[0]=a[0];
win[1]=a[1];
while(win[0]!=0||win[1]!=0){
    if(i<10){//when both windows are not empty
        t++;
        win[0]--;
        win[1]--;
        if(win[0]==0){
            win[0]=a[i];
            i++;
        }
        if(win[1]==0){
            win[1]=a[i];
            i++;
        }
    }
    else{
        t++;
        if(win[0]!=0)win[0]--;
        if(win[1]!=0)win[1]--;
    }
    }
    return t;
}


int main()
{
int temp,average_t=0;
for(int i=0;i<10;i++){
    int customers[]={5,1,1,1,1,1,1,1,1,1};//to change the position of the 5-min person
    temp=customers[0];
    customers[0]=customers[i];
    customers[i]=temp;
    average_t+=paidui(customers);
}
cout<<(double)average_t/10<<endl;
}
