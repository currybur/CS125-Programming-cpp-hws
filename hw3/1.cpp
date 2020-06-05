#include <iostream>

using namespace std;

int binsearch(int *a,int x,int mi,int ma)
{
    int mid;
    if(mi<=ma)
        {
        mid=(mi+ma)/2;
        if(x==a[mid])
            return mid;
        else if(x<a[mid])
            {
            ma=mid-1;
            }
        else if(x>a[mid])
            {
            mi=mid+1;
            }
     return binsearch(a,x,mi,ma);
     }
     return -1;
}

int main()
{
    int arr[]={14,32,4,3,65,9,22,1032};
    int num1=9,num2=11,result1,result2;
    result1=binsearch(arr,num1,0,7);
    result2=binsearch(arr,num2,0,7);
    cout<<"The array is: ";
    for(int i=0;i<8;i++)cout<<arr[i]<<",";
    cout<<endl;
    if(result1<0) cout<<num1<<" is not in array."<<endl;
    else cout<<num1<<"'s position in the array is No."<<result1+1<<endl;
    if(result2<0) cout<<num2<<" is not in array."<<endl;
    else cout<<num2<<"'s position in the array is No."<<result2+1<<endl;
    return 0;
}
