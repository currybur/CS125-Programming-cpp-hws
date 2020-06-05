#ifndef STUDENTT_H_INCLUDED
#define STUDENTT_H_INCLUDED
    #include<iostream>
    #include <Cstring>
    #include <fstream>
    #include <iomanip>
    using namespace std;

    class studentT
    {
        int id;
        char name[100];
        int birthday;
        char phnum[100];
        static int a;
    public:
        studentT(char b[] = "LHW", int bir = 19000101, char d[] = "110")
        {id=a;strcpy(name,b); birthday=bir; strcpy(phnum,d);}
        static void emmm(){a++;}
        void changein(char a[100],int b,char c[100])
        {
            strcpy(name,a);
            birthday=b;
            strcpy(phnum,c);
        }
        void display()
        {
            cout<<setw(10)<<"id"<<setw(20)<<"name"<<setw(10)<<"birthday"<<setw(15)<<"tel number"<<endl;
            cout<<setw(10)<<id<<setw(20)<<name<<setw(10)<<birthday<<setw(15)<<phnum<<endl;
        }
    };
    void addnew();
    void fetchone();
    void modify();



#endif // STUDENTT_H_INCLUDED
