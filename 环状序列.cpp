#include<iostream>
using namespace std;

#include<string>

bool mycmp(string str, int min, int station)
{
	int i = 0;
	string tmp1;
	string tmp2;
	for (i = 0; i < str.size(); i++)
	{
		tmp1 += str[(i + min) % str.size()];
	}
	for (i = 0; i < str.size(); i++)
	{
		tmp2 += str[(i + station) % str.size()];
	}
	if (tmp1 > tmp2)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Print(string str, int station)
{
	int i = 0;
	string tmp;
	for (i = 0; i < str.size(); i++)
	{
		tmp += str[(i + station) % str.size()];
	}
	cout << tmp << endl;
}


int main()
{
	int n = 0; string str; int min; int i = 0;
	cin >> n;
	cin >> str;
	if (str.size() != n)
	{
		return 0;
	}
	min = 0;
	for (i = 1; i < n; i++)
	{
		if (mycmp(str,min, i) == 1)
		{
			min = i;
		}
	}
	Print(str, min);
	system("pause");
	return 0;
}