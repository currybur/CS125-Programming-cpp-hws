#include "head.h"

int rd=0;
reader *readers[20];

reader::reader(int n, char *na)
{
    if(rd<20)
        {
            no=n;
            strcpy(name,na);
            book=0;
            booknow=0;
            readers[rd]=this;
            rd++;
        }
    else cout<<"Full!"<<endl;
}

void student::bookborrow(int x)
{
    cout<<"borrow book id"<<x<<endl;
    borrowed[book]=x;
    booknow++;
    book++;
}

void teacher::bookborrow(int x)
{
    cout<<"borrow book id"<<x<<endl;
    borrowed[book]=x;
    booknow++;
    book++;
}

void student::bookreturn(int x)
{
    cout<<"return book id"<<x<<endl;
    for(int i=0;i<book;i++)
        if(borrowed[i]==x)
            borrowed[i]=-1;
    booknow--;
}

void teacher::bookreturn(int x)
{
    cout<<"return book id"<<x<<endl;
    for(int i=0;i<book;i++)
        if(borrowed[i]==x)
            borrowed[i]=-1;
    booknow--;
}

void display(reader **r)
{
    for(int i=0;i<rd;i++)
    {
        cout<<r[i]->name<<" has borrowed bookid:";
        for(int j=0;j<r[i]->book;j++)
            if(r[i]->borrowed[j]!=-1)
                cout<<r[i]->borrowed[j]<<",";
        cout<<endl;
    }
}
