#include <iostream>
#include <Cstring>
//assume maxsize=11

using namespace std;

void create_set(int a[],int n){
    for(int i=0;i<n;i++)
         for(int j=i+1;j<n;j++)
            if(a[i]==a[j])a[i]=',';

    for (int k = 0; k < n; k++){
        if (a[k] != ','){
          cout << a[k] <<',';
        }
    }
    cout<<endl;
}

void add_element(int a[],int n){
int b[11]={',',',',',',',',',',',',',',',',',',',',','},x;
    cout << "input new element x: " << endl;
    cin >> x ;
    for (int i = 0; i < n; i++)
        b[i] = a[i];
    b[n] = x;
    for (int i = 0; i < n+1; i++){
        if ( b[i] != ',')
            cout << b[i] << ',';
    }
    cout<<endl;
}

bool find_x(int a[], int x, int n){
for(int i=0;i<n;i++)
    if(a[i]==x)return 1;
return 0;
}

void inter(int a[],int m, int b[],int n)
{
    int c[10] = {',',',',',',',',',',',',',',',',',',','} , k = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (a[i] == b[j]){
                c[k] = a[i];
            }
        }
        k += 1;
    }
    for (int i = 0; i < 10; i++){
        if (c[i] != ',')cout << c[i] << ',';
    }
    cout<<endl;
}

void unions(int a[] ,int m, int b[],int n)
{
    int c[20]={',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',',','};
    for (int i = 0; i < m; i++)
        c[i] = a[i];

    for (int j = 0; j < n; j++)
        c[j+m] = b[j];
    int l=m+n;
    create_set(c,l);
    }




int main()
{   int m[10] , n[10] , i;
//---------------------------
    cout<<"\nCreat a set from a list. "<<endl;
    cout << "Enter m[10]: " <<endl;
    for (i = 0; i <10; i++)
        cin >> m[i];

    create_set(m,10);
//--------------------------------------
cout<<"\nAdd element."<<endl;
    cout << "Enter m[10]: " << endl;
    for (i = 0; i <10; i++)
        cin >> m[i];

    add_element(m,10);
//---------------------------------
cout<<"\nFind x in set."<<endl;
   int x;
    cout << "Enter m[10]: " << endl;
    for (i = 0; i <10; i++)
        cin >> m[i];
    cout<< "Enter target x: "<<endl;
    cin>>x;
    if(find_x(m,x,10)==1)cout<<"x is in m"<<endl;
    else cout<<"x is not in m"<<endl;
//--------------------
cout<<"\nIntersection."<<endl;
    cout << "Enter m[10]: " << endl;
    for (i = 0; i <10; i++)
        cin >> m[i];

    cout << "Enter n[10]: " << endl;
    for (i = 0; i <10; i++)
        cin >> n[i];

    inter(m ,10,n,10);
//-------------------------
cout<<"\nUnion"<<endl;
    cout << "Enter m[10]: " << endl;
    for (i = 0; i <10; i++)
        cin >> m[i];
    cout << "Enter n[10]: " << endl;
    for (i = 0; i <10; i++)
        cin >> n[i];

    unions(m ,10, n,10);
    return 0;
}

