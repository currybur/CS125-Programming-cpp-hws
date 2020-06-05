#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
    #include <iostream>
    using namespace std;
    class SavingAccount
    {
        int idnum;
        char *date;
        double money;
        static double m_rate;
    public:
        static int account;
        SavingAccount(char *tdate, double tmoney);
        static void SetRate(double newRate){m_rate = newRate;}
        void newmoney();//calculate the money at the end of the month
        void display();
    };


#endif // HEAD_H_INCLUDED
