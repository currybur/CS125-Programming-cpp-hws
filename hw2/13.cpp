#include <iostream>
//define maxsize = 11.
//input array must be a set without the same element.


using namespace std;

void delete1(int a[10]);
void insert1(int a[]);
int search1(int a[10]);
void inter(int a[10] , int b[10]);
void union1(int a[10] , int b[10]);

int main()
{   int m[10] , n[10] , i;
    cout << "input m[10]" << endl;
    for (i = 0; i <= 9; ++i){
        cin >> m[i];
    }
    delete1(m);
    cout << "input m[10]" << endl;
    for (i = 0; i <= 9; ++i){
        cin >> m[i];
    }
    insert1(m);
    cout << "input m[10]" << endl;
    for (i = 0; i <= 9; ++i){
        cin >> m[i];
    }
    cout << search1(m) << endl;
    cout << "input m[10]" << endl;
    for (i = 0; i <= 9; ++i){
        cin >> m[i];
    }
    cout << "input n[10]" << endl;
    for (i = 0; i <= 9; ++i){
        cin >> n[i];
    }
    inter(m , n);
    cout << "input m[10]" << endl;
    for (i = 0; i <= 9; ++i){
        cin >> m[i];
    }
    cout << "input n[10]" << endl;
    for (i = 0; i <= 9; ++i){
        cin >> n[i];
    }
    union1(m , n);
    return 0;
}


void delete1(int a[10])
{   int i , j  , n = 10 ;
    for (i = 0; i <= 8; ++i){
        for (j = i + 1; j <= 9; ++j){
            if (a[i] != a[j]);
            else { n -= 1;a[j] = ',';}
        }
    }
    for (i = 0; i < 10; ++i){
        if (a[i] != ','){
          cout << a[i] << endl;
        }
    }

}

void insert1(int a[])
{   int i , n , x , b[11] = {',',',',',',',',',',',',',',',',',',',',','};
    cout << "input new element x at a[n]" << endl;
    cin >> x >> n;
    for (i = 0; i < n; ++i){
        b[i] = a[i];
    }
    b[n] = x;
    for (i = n + 1; i < 11; ++ i){
        b[i] = a[i - 1];
    }
    for (i = 0; i < 11; ++i){
        if ( b[i] != ',')
            cout << b[i] << endl;
    }
}

int search1(int a[10])
{
    int i , x;
    cout << "input a number:" << endl;
    cin >> x;
    for (i = 0; i < 10; ++i){
        if (a[i] == x) return i;
    }
    if (i == 10) return -1;//no this number.
}

void inter(int a[10] , int b[10])
{
    int i , j , c[10] = {',',',',',',',',',',',',',',',',',',','} , k = 0;
    for (i = 0; i < 10; ++i){
        for (j = 0; j < 10; ++j){
            if (a[i] == b[j]){
                c[k] = a[i];
            }
        }
        k += 1;
    }
    for (i = 0; i < 10; ++i){
        if (c[i] != ',')cout << c[i] << endl;
    }
}

void union1(int a[10] , int b[10])
{
    int i , j  , n = 20 , c[20];
    for (i = 0; i < 10; ++i){
        c[i] = a[i];
    }
    for (j = 10; j < 20; ++j){
        c[j] = b[j - 10];
    }
    for (i = 0; i <= 18; ++i){
        for (j = i + 1; j <= 19; ++j){
            if (c[i] != c[j]);
            else { n -= 1;c[j] = ',';}
        }
    }
    for (i = 0; i < 20; ++i){
        if (c[i] != ','){
          cout << c[i] << endl;
        }
    }

}
