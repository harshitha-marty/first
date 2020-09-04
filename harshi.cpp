#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char ch,file1[20],file2[20];
//	cin>>file1;
//	cin>>file2;
	ifstream file;
	ofstream file_;
	file.open(file1);
	file_.open(file2);
	while(file.eof()==0)
	{
		file>>ch;
		file_<<ch;
	}
	file.close();
	file_.close();
}
