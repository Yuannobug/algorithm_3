#include<iostream>
using namespace std;

int main()
{
	int n = 0; int i = 0; int j = 0; int tmp = 0;
	int x = 0; int y = 0;
	cin >> n;
	int** p = new int* [n];
	for (i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			p[i][j] = 0;
		}
	}
	while (tmp < n * n)
	{
		while (x < n && p[x][y] == 0) { p[x++][y] = ++tmp; }//ÏÂÒÆ
		x--; y++;
		while (y < n && p[x][y] == 0) { p[x][y++] = ++tmp; }//ÓÒÒÆ
		y--; x--;
		while (x >= 0 && p[x][y] == 0) { p[x--][y] =++ tmp; }//ÉÏÒÆ
		x++; y--;
		while (y>= 0 && p[x][y] == 0) { p[x][y--] = ++tmp; }//×óÒÆ
		x++; y++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << p[i][j] << '\t';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}