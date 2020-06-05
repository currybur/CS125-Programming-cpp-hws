#include <iostream>
//length of an array is 3.

using namespace std;

template<class T>
T ma(T a[])
{   int i , n;
    T b;
    b = a[0];
    n = sizeof(a);
    for (i = 1; i <= n - 2; ++i){
        if (a[i] > b) b = a[i];
    }
    return b;
}
template<class T>
T mi(T a[])
{   int i,n;
    T b;
    b = a[0];
    n = sizeof(a);
    for (i = 1; i <= n - 2; ++i){
        if (a[i] < b) b = a[i];
    }
    return b;
}
int main()
{   int a[3] , i;
    char b[3];
    double c[3];
    cout << "input 3 int:" << endl;
    for (i = 0; i < 3; ++i){
        cin >> a[i];
    }
    cout<<"max(a):"<<ma(a)<<endl;
    cout<<"min(a):"<<mi(a)<<endl;
    cout << "input 3 char:" << endl;
    for (i = 0; i < 3; ++i){
        cin >> b[i];
    }
    cout<<"max(b):"<<ma(b)<<endl;
    cout<<"min(b):"<<mi(b)<<endl;
    cout << "input 3 double:" << endl;
    for (i = 0; i < 3; ++i){
        cin >> c[i];
    }
    cout<<"max(c):"<<ma(c)<<endl;
    cout<<"min(c):"<<mi(c)<<endl;
    return 0;

}
