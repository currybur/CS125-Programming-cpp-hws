#include <iostream>
#include "mySet.h"
using namespace std;

int main()
{
    mySet<char*> s1,s2;
    cout<<"The initial sets 1,2: "<<s1<<endl<<s2;
    cout<<"Set1 append 'a', 'b' and 'c'."<<endl;
    cout<<"Set2 append 'a', 'd' and 'f'."<<endl;
    s1.append("a");
    s1.append("b");
    s1.append("c");
    s2.append("a");
    s2.append("d");
    s2.append("f");
    cout<<"Set1: "<<s1<<endl<<"Set2: "<<s2<<endl;
    cout<<"Intersect of s1 and s2: "<<myint(s1,s2)<<endl;
    cout<<"Union of s1 and s2: "<<myuni(s1,s2)<<endl;
}
