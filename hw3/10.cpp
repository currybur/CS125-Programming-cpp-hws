#include <iostream>
#include <Cstring>

using namespace std;

void show(const char *s,int dot);
int set_form(const char *s1, char *s);
int add(const char  *p1, const char  *p2, char *s,int dot1, int dot2);

int main()
{
int a=321.3,b=4.654;
char s1[]="3213",s2[]="4654",s1_new[128],s2_new[128],s_new[128];
int dot1=0,dot2=3,dot;
//represent a float with a string including numbers and an int expresses the position of dot
set_form(s1,s1_new);
set_form(s2,s2_new);
dot=add(s1_new,s2_new,s_new,dot1,dot2);
show(s_new,dot);
}

int add(const char  *p1, const char  *p2, char *s,int dot1, int dot2)
{
    int i, j=0,dott;
    if(dot1!=dot2)
    {
        if(dot1<dot2)
        {  //fractional part
            int dif=dot2-dot1;
            for(int a=0;a<dif;a++)
            {
                s[a]=p2[a];
            }
            for(int b=dif;b<=dot2;b++)
            {
                s[b]=p2[b]-'0'+p1[b-dif]-'0'+j;
                if(s[b]>=10)j=s[b]/10;else j=0;
                s[b]=s[b]%10+'0';
            }
            //int part
            for (i=dot2+1; i < 128; ++i)
            {
               s[i] = p2[i] - '0' + p1[i-dif] - '0' + j;
               if ( s[i] >= 10)  j = s[i] / 10; else j = 0;
	           s[i] = s[i] % 10 + '0';
            }
        }
        else
        {   //fractional part
            int dif=dot1-dot2;
            for(int a=0;a<dif;a++)
            {
                s[a]=p1[a]-'0';
            }
            for(int b=dif;b<=dot1;b++)
            {
                s[b]=p1[b]-'0'+p2[b-dif]-'0'+j;
                if(s[b]>=10)j=s[b]/10;else j=0;
                s[b]=s[b]%10+'0';
            }
            //int part
            for (i=dot1+1; i < 128; ++i)
            {
               s[i] = p1[i] - '0' + p2[i-dif] - '0' + j;
               if ( s[i] >= 10)  j = s[i] / 10; else j = 0;
	           s[i] = s[i] % 10 + '0';
            }
        }
    }
    else
    {
        for(i=0;i<128;i++)
        {
                s[i] = p1[i] - '0' + p2[i] - '0' + j;
               if ( s[i] >= 10)  j = s[i] / 10; else j = 0;
	           s[i] = s[i] % 10 + '0';
        }
    }
    dott=max(dot1,dot2);
    return dott;
}

int set_form(const char *s1, char *s)
{
    int i=strlen(s1)-1,j=0;
    while(i>=0)
    {
        if(s1[i]>'9'||s1[i]<'0')
        {
            cout<<"set error\n";
            return -1;
        }
        else
        {
            s[j]=s1[i];
            --i;
            ++j;
        }
    }
     for(;j<128;++j)s[j]='0';
    return 0;
}

void show(const char *s,int dot)
 { int i=127;

   while (s[i] == '0')  --i; //Ìø¹ýÇ°ÖÃµÄ0
   while (i>=0)
          {
              if(i==dot) cout<<'.';
              cout << s[i];
              --i;
          }
   cout << endl;
 }



