//file fetch.cpp
//includes display, fetch by id and fetch by name.
//and there is an assist function

#include "head.h"

void display()
{
    cout<<"ID\t\tName\tChinese\tMath\tEnglish"<<endl;
    for(int i=0;i<amofdata;i++)
    {
        cout<<data[i].id<<"   "<<data[i].name<<"   "<<data[i].chinese<<"      "<<data[i].math<<"   "<<data[i].english<<endl;
    }
}


void fetchid()
{
    char idnum[100];
    cout<<"Please input the id number: ";
    cin>>idnum;
    for(int i=0;i<amofdata;i++)
    {
        int len=leng(idnum);
        if(charsame(data[i].id,idnum,len))
        {
            cout<<"ID\t\tName\tChinese\tMath\tEnglish"<<endl;
            cout<<data[i].id<<"   "<<data[i].name<<"   "<<data[i].chinese<<"      "<<data[i].math<<"   "<<data[i].english<<endl;
            break;
        }
    }
}

void fetchname()
{
    char name[100];
    cout<<"Please input the name: ";
    cin>>name;
    for(int i=0;i<amofdata;i++)
    {
        int len=leng(name);
        if(charsame(data[i].name,name,len))
        {
            cout<<"ID\t\tName\tChinese\tMath\tEnglish"<<endl;
            cout<<data[i].id<<"   "<<data[i].name<<"   "<<data[i].chinese<<"      "<<data[i].math<<"   "<<data[i].english<<endl;
            break;
        }
    }
}

