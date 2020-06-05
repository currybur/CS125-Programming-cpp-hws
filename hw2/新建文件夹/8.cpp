#include<iostream>
#include<string>

using namespace std;

string delete_repeats(string a)
{
string b;//the new string with repeating characters deleted.
int n = a.size();
for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                a[j] = 0;
            }
        }
    }
    for (int k = 0; k < n; k++){
        if (a[k] != 0)
            b += a[k];
    }
    return b;
}

string order(string a){
char temp;//a temperary character.
int len=a.size();
for(int i=0;i<len;i++)
    for(int j=i+1;j<len;j++)
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

return a;
}

int main(){
    string str1,str2,str3;
    cin >> str1;
    str2=delete_repeats(str1);
    str3=order(str2);
    cout<<str2<<endl<<str3<<endl;
    return 0;
}
