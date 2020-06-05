#include <iostream>

using namespace std;

void Insertsort(int a[], int n){
    for (int j = 1; j < n; j++){
        int temp = a[j];
        int i = j - 1;
        while (i >= 0 && temp < a[i]){
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = temp;
    }
}

int main()
{
int m[]={6,5,123,22,3,4,776,10086,1};
cout << "input {6,5,123,22,3,4,776,10086,1}" << endl;
Insertsort(m,9);
cout << "result is: ";
for (int i = 0; i < 9; i++)
        cout << m[i]<<",";
}
