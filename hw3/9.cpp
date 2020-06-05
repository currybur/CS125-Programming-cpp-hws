#include <iostream>

using namespace std;

void insertsort(int *a, int n);

int main()
{
    int siz, *arr;
    cout<<"Enter the size of the array: ";
    cin>>siz;
    arr=new int[siz];
    cout<<endl<<"Enter the array: ";
    for(int i=0;i<siz;i++)
        cin>>arr[i];
    insertsort(arr,siz);
    cout<<"The sorted array is: ";
    for(int i=0;i<siz;i++)
        cout<<arr[i]<<",";
    delete []arr;
    return 0;
}

void insertsort(int *a, int n)
{
    for (int j = 1; j < n; j++)
    {
        int temp = a[j];
        int i = j - 1;
        while (i >= 0 && temp < a[i]){
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = temp;
    }
}
