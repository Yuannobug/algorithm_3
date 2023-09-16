#include<iostream>
using namespace std;

#include<vector>

int main()
{
	vector<int> v(100000,0);
	int i = 0; int sum = 0; int num = 0; int tmp = 0;
	for (i = 1; i < v.size(); i++)
	{
		sum = i; tmp = i;
		while (tmp != 0)//将tmp的各位取出来
		{
			sum += tmp % 10;
			tmp = tmp / 10;
		}
		if (sum < v.size() && v[sum] == 0)
		{
				v[sum] = i;
		}
	}
	cin >> num;
	cout << v[num] << endl;
	system("pause");
	return 0;
}