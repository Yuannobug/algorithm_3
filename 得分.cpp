#include<iostream>
using namespace std;

#include<string>

int main()
{
	string str; int i = 0; int score = 0; int count = 1;
	cin >> str;
	for (i = 0; i < str.size(); i++)
	{
		if (str[i] == 'O')
		{
			score += count;
			count++;
		}
		if (str[i] == 'X')
		{
			count = 1;
		}
	}
	cout << score << endl;
	system("pause");
	return 0;
}