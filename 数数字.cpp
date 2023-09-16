#include<iostream>
using namespace std;

#include<iomanip>

int main()
{
	string str; int i = 0; int num[10]={0};
	cin >> str;
	for (i = 0; i < 10; i++)
	{
		num[i] = 0;
	}
	for (i = 0; i < str.size(); i++)
	{
		num[str[i] - '0'] += 1;
	}
	for (i = 0; i < 10; i++)
	{
		cout <<setw(4)<< num[i]<<"  ";
	}
	cout << endl;
	system("pause");
	return 0;
}