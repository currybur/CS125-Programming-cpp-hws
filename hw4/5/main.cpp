#include <iostream>
#include "head.h"
#include <Cstring>
using namespace std;

studentT data[100];
int amofdata=0;

int main()
{
    char select;
    cout<<"Welcome to academic management system!"<<endl;
    do{
    cout<<"\n";
    cout<<"Please choose one task to continue:"<<endl;
    cout<<"1-Add information into system."<<endl;
    cout<<"2-Modify students' information."<<endl;
    cout<<"3-Display all students' information."<<endl;
    cout<<"4-Fetch information by id number."<<endl;
    cout<<"5-Fetch information by name."<<endl;
    cout<<"6-Sort by id number."<<endl;
    cout<<"7-Sort by total score."<<endl;
    cout<<"0-Exit."<<endl;
    cin>>select;
    switch(select)
    {
        case '1': add();break;
        case '2': modify();break;
        case '3': display();break;
        case '4': fetchid();break;
        case '5': fetchname();break;
        case '6': idsortasc();break;
        case '7': scoresortdes();break;
        break;
    }
    }while(select!='0');
    return 0;
}
