/*simulate 10000times, result from 50 to 100:
7
92
476
1194
2043
2450
1971
1201
474
83
9
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
int i,j,score,a;
int count_list[11]={0};
srand(time(NULL));
for(j=0;j<10000;j++){
score=0;
for(i=0;i<10;i++){
    a=rand()%2;
    if(a==0)score+=10;
    else score+=5;
}
count_list[(score-50)/5]+=1;
}
for(j=0;j<11;j++){
cout<<count_list[j]<<endl;
}
}
