#include <iostream>
#include <cmath>
#include <fstream>
#include "studentT.h"
using namespace std;

int studentT::a = 0;

int main()
{
    int selec;
    while(true)
    {
        cout<< "System. "<<endl;
        cout << "1-add new student" << endl;
        cout << "2-search by id number" << endl;
        cout << "3-change one's information" << endl;
        cout << "0-exit" << endl;
        cout << "You choose to :";
        cin >> selec;
        if (selec == 0) break;
        switch(selec)
        {
            case 1:addnew();break;
            case 2:fetchone();break;
            case 3:modify();break;
        }
    }
    return 0;
}
