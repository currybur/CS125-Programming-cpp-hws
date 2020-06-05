#include <iostream>

using namespace std;

void quicksort(int a[], int low, int high);
int divide( int a[], int low, int high);
int maxi(int a[]);
int secmax(int a[]);

int main()
{
int a[]={3,2,4,5,6,1,9,7};
cout<<"Maximun is: "<<maxi(a)<<endl<<"Second maximun is: "<<secmax(a);
}


int divide( int a[], int low, int high)
{ int k = a[low];
   do
   {
        while (low<high && a[high]>=k)
            --high;
        if (low < high)
        {
            a[low] = a[high]; ++low;
        }
        while (low < high && a[low] <=k)
            ++low;
        if (low < high)
        {
            a[high] = a[low];
            --high;
        }
    } while (low != high);
   a[low] = k;
   return low;
}

void quicksort(int a[], int low, int high)
{ int mid;
   if (low >= high) return;
   mid = divide(a, low, high);
   quicksort(a,low, mid);
   quicksort(a,mid+1,high);
}

int maxi(int a[])
{
    quicksort(a,0,8);
    return a[7];
}

int secmax(int a[])
{
    quicksort(a,0,8);
    return a[6];
}
