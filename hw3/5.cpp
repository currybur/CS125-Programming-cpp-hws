#include <iostream>

using namespace std;

void gbsort(int *a,int low,int high,int *temp);
void mer_ge(int *a, int low, int mid, int high, int *temp);

int main()
{
int a[]={4,2,7,54,6,5,345,73,1};
int temp[9];
gbsort(a,0,8,temp);
for(int i=0;i<9;i++)
    cout<<a[i]<<",";
}

void gbsort(int *a,int low,int high,int *temp)
{
    int mid;
    if(high>low)
    {
        mid=(low+high)/2;
        gbsort(a,low,mid,temp);//divide the left half
        gbsort(a,mid+1,high,temp);//divide the right half
        mer_ge(a,low,mid,high,temp);
    }
}

void mer_ge(int *a, int low, int mid, int high, int *temp)//to connect two arrays
{
    int i,j,k=0;
    i=low;
    j=mid + 1;
    while (i<=mid&&j<=high)
    {
        //choose the smaller one
        if(a[i]<=a[j]) temp[k++]=a[i++];
        else temp[k++]=a[j++];//after each selection, go forward a step
    }
    //if elements in one array are all selected
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=high)
        temp[k++]=a[j++];
    for (i = 0; i<k; i++)
        a[low+i]=temp[i];//order the original array
}
