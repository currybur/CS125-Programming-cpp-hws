#include <iostream>
#include<cmath>

using namespace std;

int main(){
int n,m;
cout<<"Enter the shape of the matrix: "<<endl<<"rows: ";
cin>>n;
cout<<"columns: ";
cin>>m;
int matrix[n][m]; //considering the convenience I use this unformal definition.
int br[1000]={0};   //save the row position of max of row
int bc[1000]={0};  //save the column position of max of row
int sr[1000]={0};     //save row position of min of column
int sc[1000]={0};  //save the column position of min of column
int row_max[1000]={0};   //row max
int col_min[1000]={0};  //column min
int wh=0;//judge whether exists this point


for(int i=0;i<n;i++)
  for(int j=0;j<m;j++){
      cin>>matrix[i][j];
    }

for(int i=0;i<1000;i++)
      col_min[i]=9999999;

for(int i=0;i<n;i++) {
for(int j=0;j<m;j++){
    if(matrix[i][j]>row_max[i]){
           row_max[i]=matrix[i][j];
           br[i]=i;
           bc[i]=j;
         }
          if(matrix[j][i]<col_min[i])
       {
         col_min[i]=matrix[j][i];
         sr[i]=j;
         sc[i]=i;

       }
       }
     }
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if (br[i]==sr[j]&&bc[i]==sc[j]){
      cout<<"鞍点为第"<<br[i]+1<<"行,第"<<bc[i]+1<<"列的"<<matrix[br[i]][bc[i]]<<endl;
      wh++;
    }
   }
 }
if(wh==0)cout<<"None."<<endl;
return 0;
}
