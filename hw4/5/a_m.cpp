//file: a_m.cpp
//includes add and modify functions

#include "head.h"
#include <Cstring>

void add()
{
    cout<<"Please input id number, name, chinese score, math score and english score: "<<endl;
    cin>>data[amofdata].id>>data[amofdata].name>>data[amofdata].chinese>>data[amofdata].math>>data[amofdata].english;
    amofdata++;
}

void modify()
{
    char idnum[100],name[100];
    int a;
    cout<<"\nPlease choose the way to find the student:\n 1-name  \n 2-id number"<<endl;
    cin>>a;
    if(a==1)
    {
        cout<<"\nPlease input the name: "<<endl;
        cin>>name;
        for(int i=0;i<amofdata;i++)
        {
            int len=leng(name);
            if(charsame(data[i].name,name,len))
            {
                cout<<"\nStudent information:\n";
                cout<<"ID\t\tName\tChinese\tMath\tEnglish"<<endl;
                cout<<data[i].id<<"   "<<data[i].name<<"   "<<data[i].chinese<<"   "<<data[i].math<<"   "<<data[i].english<<endl;
                int choice;
                cout<<"\nChoose what you want to modify\n1-id\n2-name\n3-chinese\n4-math\n5-english"<<endl;
                cin>>choice;
                cout<<"\nInput the new data: ";
                switch(choice)
                {
                    case 1: char newid[100];cin>>newid;strcpy(data[i].id,newid);break;
                    case 2: char newname[100];cin>>newname;strcpy(data[i].name,newname);break;
                    case 3: int newc;cin>>newc;data[i].chinese=newc;break;
                    case 4: int newm;cin>>newm;data[i].math=newm;break;
                    case 5: int newe;cin>>newe;data[i].english=newe;break;
                }
            }
        }
    }
    else if(a==2)
    {
        cout<<"Please input the id number: "<<endl;
        cin>>idnum;
        for(int i=0;i<amofdata;i++)
        {
            int len=leng(idnum);
            if(charsame(data[i].id,idnum,len))
            {
                cout<<"\nStudent information:\n";
                cout<<"ID\t\tName\tChinese\tMath\tEnglish"<<endl;
                cout<<data[i].id<<"   "<<data[i].name<<"   "<<data[i].chinese<<"   "<<data[i].math<<"   "<<data[i].english<<endl;
                int choice;
                cout<<"\nChoose what you want to modify\n1-id\n2-name\n3-chinese\n4-math\n5-english "<<endl;
                cin>>choice;
                cout<<"\nInput the new data: ";
                switch(choice)
                {
                    case 1: char newid[100];cin>>newid;strcpy(data[i].id,newid);break;
                    case 2: char newname[100];cin>>newname;strcpy(data[i].name,newname);break;
                    case 3: int newc;cin>>newc;data[i].chinese=newc;break;
                    case 4: int newm;cin>>newm;data[i].math=newm;break;
                    case 5: int newe;cin>>newe;data[i].english=newe;break;
                }
            }
        }
    }
}
