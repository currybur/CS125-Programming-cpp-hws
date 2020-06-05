//queue1 = 9 min.
//queue2 = 7.6 min.
#include<iostream>
#include<cmath>

using namespace std;

int qu(int a[]);

int main()
{
    cout << 5+1+1+1+1 << endl;
    int a[10] = {5,1,1,1,1,1,1,1,1,1} , i , s , t , k;
    t = 0;
    s = 0;
    s += qu(a);
    for (i = 0; i <= 8; ++i){
        t = a[i];
        a[i] = a[i+1];
        a[i+1] = t;
        s += qu(a);
    }
    cout << s / 10.0 << endl;
    return 0;

}



int qu(int a[])
{
    int i,j,t;
    int b[10];
    for (i = 0; i <= 9;++i){
        b[i] = a[i];
    }
    i = 0;
    j = 1;
    t = 0;//time
    while (i < 9 && j < 9){

                b[i] = b[i]-1;
                b[j] = b[j]-1;
                t++;
                if (b[i] == 0) {//indicate one customer has finished.
                i = max(i + 1 , j + 1);
                if (i == 9)
                    return t + max(b[i] , b[j]);}//only remain 2 customers,so t should add the time of the customer which is longer.
                if (b[j] == 0) {
                    j = max(j + 1 , i + 1);
                    if (j == 9)
                        return t + max(b[i] , b[j]);}
        }
}



