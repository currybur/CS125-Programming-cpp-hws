#include "studentT.h"

void addnew()
{
    char a[100];
    int b;
    char c[100];
    studentT *newone;
    studentT::emmm();
    ofstream out("data.txt",ofstream::app);
    cout<<"input the name"<<endl;
    cin.ignore();
    cin.getline(a,100);
    cout<<"input the birthday"<<endl;
    cin>>b;
    cout<<"input the phone number"<<endl;
    cin>>c;
    newone=new studentT(a,b,c);
    out.write(reinterpret_cast<const char *>(newone),sizeof(*newone));
    delete newone;
    out.close();
}

void fetchone()
{
    int idn;
    cout<<"input the student's id: ";
    cin>>idn;
    studentT per;
    fstream io("data.txt");
    io.seekg((idn-1)*sizeof(studentT));
    io.read(reinterpret_cast<char *>(&per),sizeof(studentT));
    per.display();
    io.close();
}

void modify()
{
    int idn;
    cout<<"input the student's id number:";
    cin>>idn;
    char newname[100],newph[100];
    int newbir;
    cout<<"input the new name:";
    cin.ignore();
    cin.getline(newname,100);
    cout<<"input the new birthday:";
    cin>>newbir;
    cout<<"input the new phone number:";
    cin>>newph;
    studentT per;
    fstream io("data.txt");
    io.seekg((idn-1)*sizeof(studentT));
    io.read(reinterpret_cast<char *>(&per),sizeof(studentT));
    per.changein(newname,newbir,newph);
    io.seekp((idn-1)*sizeof(studentT));
    io.write(reinterpret_cast<const char *>(&per),sizeof(studentT));
    io.close();
}
