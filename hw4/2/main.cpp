#include <iostream>
#include <string>
#include <Cstring>
using namespace std;

void dech(char *s, char a,int len);
void sort_char(char *l[], int *lens);
bool comp_str(char *a, char *b, int lena, int lenb);

int main()
{
    char a[30],b[30],c[30],ch,*li[3];
    int lens[3];
    cout<<"Input three strings and a character.\n";
    cin>>a>>b>>c>>ch;
    dech(*&a,ch,strlen(a));
    dech(*&b,ch,strlen(b));
    dech(*&c,ch,strlen(c));
    li[0]=a;
    li[1]=b;
    li[2]=c;
    lens[0]=strlen(a);
    lens[1]=strlen(b);
    lens[2]=strlen(c);
    sort_char(li,lens);
    cout<<"Sorted result: \n";
    for(int i=0;i<3;i++)
        cout<<li[i]<<endl;
    return 0;
}

void dech(char *s, char a, int len)
{
    char *temp;
    temp = new char[len];
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=a)
        {
            temp[j]=s[i];
            j++;
        }
    }
    temp[j]='\0';
    for(int k=0;k<=j;k++)
        s[k]=temp[k];
}

bool comp_str(char *a, char *b, int lena, int lenb)
{
    for(int i=0;i<min(lena,lenb);i++)
    {
        if(a[i]<b[i])return true;
        else if(a[i]>b[i])return false;
        else continue;
    }
    if(lena<lenb)return true;
    else return false;
}

void sort_char(char *l[], int *lens)
{
    char temp[30];
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
        {
            if(comp_str(l[i], l[j], lens[i], lens[j]))
            {
                strcpy(temp,l[i]);
                strcpy(l[i],l[j]);
                strcpy(l[j],temp);
            }
        }
}
