#include <iostream>
using namespace std;

int main()
{int m,n,i,j,jj,ii,Store1=0,Store2=0;
	cout<<"Please input the row m and column n of the matric:"<<endl;
	cin>>m>>n;
	int matric[m][n]={0},max[m][n]={0},min[m][n]={0};
	//input matric
	for (i=0;i<m;++i)
		for (j=0;j<n;++j)
			cin>>matric[i][j];
	
	//Find the max number of every row,restored it position in max
	for (i=0;i<m;++i)
		{for (j=0;j<n-1;++j)
			{	if (matric[i][j]<matric[i][j+1])
					{Store1=j+1;}
				if (j==n-2){	
					for (jj=0;jj<n;++jj)
					 	{	 if (matric[i][jj]==matric[i][Store1])
					 				max[i][jj]=1;
						 }
					 }
			}Store1=0;}
    


    //Find the min number of every column,restored it position in min	
    for (j=0;j<n;++j)
    	{for (i=0;i<m-1;++i)
    		{  if (matric[i][j]>matric[i+1][j])
    				{Store2=i+1;}
    		   if (i==m-2){
    					for (ii=0;ii<m;++ii)
    					{	if (matric[ii][j]==matric[Store2][j])
    								min[ii][j]=1;
						}
					}
			}Store2=0;}
			
			

    for (i=0;i<m;++i)
    	for (j=0;j<n;++j)
    		if (max[i][j]==1&&min[i][j]==1)
    			cout<<"row :"<<i<<"column:"<<j<<endl;
			
	


return 0;
}
