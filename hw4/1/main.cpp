#include <iostream>
#include <Cstring>
using namespace std;

void  new_str(char *str,char *s,int row, int l,int c);

int main()
{
    char s[30];
    char *str;
    int row,L,l,c;
    cout<<"Input row number:";
    cin>>row;
    cout<<"Input string:";
    cin>>s;
    l=strlen(s);
    if(row!=1)
        {
        c=(row-1)*(l/(2*row-2))+(l%(2*row-2)/4)*(l%(2*row-2)%4)+1;
        str = new char[row*c];
        new_str(str,s,row,l,c);
        for(int n=0;n<row;n++)
            for(int m=0;m<c;m++)
                {
                    if(str[c*n+m]!=',')
                    {
                        cout<<str[c*n+m];
                    }

                }
        }
    else cout<<s;
delete []str;
}

void  new_str(char *str,char *s,int row, int l,int c)
{
    int j=0;
    if(row!=1&&row!=2)
    {
        for(int n=0;n<c;n++)
            for(int m=0;m<row;m++)
                {
                    if(s[j]!='\0'){
                    if((n+1)%(row-1)==1)
                    {
                        str[c*m+n]=s[j];
                        //cout<<"Column"<<n<<"Line "<<m<<" add "<<str[c*m+n]<<endl;
                        j++;
                    }
                    else
                    {
                        if(m==row-(n+row-1)%(row-1)-1)
                        {
                            str[c*m+n]=s[j];
                            //cout<<"Column"<<n<<"Line "<<m<<" add "<<str[c*m+n]<<endl;
                            j++;
                        }
                        else str[c*m+n]=',';
                    }
                    }
                    else break;

                }
    }
    else if(row==2)
    {
        for(int n=0;n<c;n++)
            for(int m=0;m<row;m++)
                {
                    if(s[j]!='\0')
                    {
                        str[c*m+n]=s[j];
                        j++;
                    }
                    else str[c*m+n]=',';
                }
    }
}
