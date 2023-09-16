#include<iostream>
using namespace std;

#include<string>


int main()
{
	string str;int T = 1;//周期长度
	int i = 0;
	cin >> str;
	for (i = 1; i < str.size(); i++)
	{
		if (str[i]==str[i-T])
		{
			continue;
		}
		else
		{
			T = i + 1;
		}
	}
	cout << T << endl;
	system("pause");
	return 0;
}