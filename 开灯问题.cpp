#include<iostream>
using namespace std;


int main()
{
	int n = 0; int k = 0;
	int i = 0; int j = 0;
	cin >> n; cin >> k;
	int* p = new int[n];
	for (i = 0; i < n; i++)
	{
		p[i] = 0;
	}
	for (j = 1; j <=k ; j++)
	{
		for (i = 0; i < n; i++)
		{
			if ((i + 1) % j == 0)
			{
				p[i] = !p[i];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (p[i] == 1)
		{
			cout << i + 1 << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}