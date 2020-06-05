#include "head.h"

int SavingAccount::account=0;
double SavingAccount::m_rate=0;

SavingAccount::SavingAccount(char *tdate, double tmoney):date(tdate),money(tmoney)
{
    account++;
    idnum = account;
}

void SavingAccount::newmoney()
{
    money = (1+SavingAccount::m_rate)*money;
}

void SavingAccount::display()
{
    cout<<money;
}
