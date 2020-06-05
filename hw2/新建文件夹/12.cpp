#include <iostream>

using namespace std;

char *my_strstr(char* str, char* substr){
if(*substr){
    while(*str){
        for(int i=0;*(str+i)==*(substr+i);i++){
            if(!*(substr+i+1))return (char*)str;
        }
        str++;
    }
    return NULL;
}
else return (char*)str;
}

int main()
{
char *result=my_strstr("asdkqwjndkjn","kqwj");
if(result!=NULL)cout<<"exists: "<<result<<endl;
else cout<<"Nonexistant!"<<endl;
return 0;
}
