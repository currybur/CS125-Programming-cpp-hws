#include<iostream>
#include<fstream>
using namespace std;

struct student
{
	char num[10];
	int chi;
	int math;
	int eng;
	int total;
};

void scoresortdes(int amofdata,student* data)
{
    student temp;
    for(int i=0;i<amofdata;i++)
        for(int j=i+1;j<amofdata;j++)
        {
            if((data[i].total)<(data[j].total))
            {
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
}

int main()
 {
	ifstream fin("score.txt");
	ofstream out("final.txt");
	if (!fin)cout << "Error!" << endl;
	cout << "Information: " << endl;
	student stu[100];
	int n = 0;
	do
	{
		fin >> stu[n].num >> stu[n].chi >> stu[n].math >> stu[n].eng;
		if (stu[n].num[0] == NULL)break;
		cout<<stu[n].num<<endl;
		cout<<stu[n].chi<<endl;
		cout<<stu[n].math<<endl;
		cout<<stu[n].eng<<endl;
		stu[n].total = stu[n].chi + stu[n].math + stu[n].eng;
		out<<stu[n].num<<" "<<stu[n].chi<<" "<<stu[n].math<<" "<<stu[n].eng<<" "<<stu[n].total<<"\n";
		n++;
	}while (fin.get()!=EOF);
	scoresortdes(n,stu);
	for (int i = 0; i < n; i++)
	{
		cout << "NO." << i + 1 << " ID number: " << stu[i].num << "\tTotal score: " << stu[i].total
			<< "\tChinese: " << stu[i].chi << "\tMath: " << stu[i].math << "\tEnglish: " << stu[i].eng << endl;
	}

	fin.close();
    out.close();
}
