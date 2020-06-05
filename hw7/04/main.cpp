#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;
int main()
{
    char c;
    int duan=0,zishu=0,cishu=0;
    ifstream fin("file.txt");
    int flag=0;
    while (( c = fin.get() ) != EOF)
    {
        if(c== '\n' )duan++;
        if(c!=' '&&c!='\n')zishu++;
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')&&flag==0)flag++;
        if((c<'A'||(c>'Z'&&c<'a')||c>'z')&&flag!=0){cishu++;flag=0;}
    }
    cout<<"para "<<duan+1<<endl;
    cout<<"zishu "<<zishu<<endl;
    cout<<"cishu "<<cishu<<endl;
    return 0;
}

