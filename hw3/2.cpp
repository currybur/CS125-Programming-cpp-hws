#include <iostream>

using namespace std;

int selsort(int *a, int siz);

int main()
{
int arr[]={3,21,543,2,4,76,45674,11,103,86};

cout<<"The original array is: ";
for(int i=0;i<10;i++) cout<<arr[i]<<",";
selsort(arr,10);
cout<<endl<<endl;;
cout<<"The ordered array is: ";
for(int i=0;i<10;i++) cout<<arr[i]<<",";
return 0;
}

int selsort(int *a, int siz)
{
    int temp;
    if (siz>0)
    {
        for(int i=0; i<siz; i++)
        {
            if (a[i]<a[ 0 ])
            {
                temp = a[i];
                a[i] = a[0];
                a[0] = temp;
            }
        }

        selsort(a+1,siz-1);
    }
}
