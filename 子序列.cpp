#include<iostream>
using namespace std;

#include<string>

void judge(string s, string t)
{
	int i = 0; int j = 0;
	for (i = 0; i < t.size(); i++)
	{
		if (t[i] == s[j])
		{
			j++;
			if (j == s.size())
			{
				cout << "ture" << endl;
				return;
			}
		}
	}
	cout << "false" << endl;
}

int main()
{
	string s; string t;
	cin >> s;
	cin >> t;
	if (s.size() > t.size())
	{
		cout << "false" << endl;
		system("pause");
		return 0;
	}
	if (s == t)
	{
		cout << "true" << endl;
		system("pause");
		return 0;
	}
	judge(s, t);
	system("pause");
	return 0;
}