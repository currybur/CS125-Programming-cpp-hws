#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    #include <Cstring>
    using namespace std;

    class employee
    {
    protected:
        char name[20];
        char idnum[20];
    public:
        employee(char *na,char *idn){strcpy(idnum,idn);strcpy(name,na);}
    };

    class se:public employee
    {
        int weekly_salary;
    public:
        se(char *na="boss",char *idn="0", int ws=1):employee(na,idn){weekly_salary=ws;}
        int get_salary(){return weekly_salary;}
        void display(){int s=get_salary();cout<<name<<": "<<s;}
    };

  class he:public employee
    {
        int hours,hourly_salary;
    public:
        he(char *na="boss",char *idn="0", int hrs=1,int hs=1):
            employee(na,idn){hours=hrs;hourly_salary=hs;}
        int get_salary()
        {
            if(hours<=40)return hours*hourly_salary;
            else return 40*hourly_salary+(hours-40)*2*hourly_salary;
        }
        void display(){int s=get_salary();cout<<name<<": "<<s;}
    };

    class ce:public employee
    {
        int sales;
        double perc;
    public:
        ce(char *na="boss",char *idn="0", int ss=1, double pc=0.01):
            employee(na,idn){sales=ss;perc=pc;}
        int get_salary(){return sales*perc;}
        void display(){int s=get_salary();cout<<name<<": "<<s;}
    };

    class be:public employee
    {
        int sales,basic_salary;
        double perc;
    public:
        be(char *na="boss",char *idn="0", int ba=10,int ss=1, double pc=0.01):
            employee(na,idn){sales=ss;basic_salary=ba;perc=pc;}
        int get_salary(){return (basic_salary+sales*perc);}
        void display(){int s=get_salary();cout<<name<<": "<<s;}
    };
#endif // HEAD_H_INCLUDED
