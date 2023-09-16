#include<iostream>
using namespace std;

#include<string>
#include<ctime>
#include<iomanip>

typedef struct board
{
	int num;
	char word;
}board;

void Printboard(board** grid,int r,int c)
{
	int i = 0; int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cout << setw(4) << grid[i][j].word;
		}
		cout << endl;
	}
	cout << "——————————————" << endl;
}

void Initboard(board** grid,int r,int c)
{
	int i = 0; int j = 0; int x = 0; int y = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			grid[i][j].num = 0;
			grid[i][j].word = 'a' + rand() % 26;
		}
	}
	for (i = 0; i < (r * c) / 4; i++)
	{
		x = rand() % r;
		y = rand() % c;
		if (grid[x][y].word == '*')
		{
			i--;
		}
		else
		{
			grid[x][y].word = '*';
		}
	}
}


int Numboard(board** grid, int r, int c)
{
	int word_num = 0;
	int i = 0; int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (grid[i][j].word == '*')
			{
				continue;
			}
			if ((i == 0 || j == 0))
			{
				grid[i][j].num = ++word_num;
			}
			else
			{
				if (grid[i - 1][j].word == '*' || grid[i][j - 1].word == '*')
				{
					grid[i][j].num = ++word_num;
				}
			}
		}
	}
	return word_num;
}

void Printnum(board** grid, int r, int c)
{
	int i = 0; int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (grid[i][j].word == '*')
			{
				cout << setw(4) << grid[i][j].word;
			}
			else
			{
				cout << setw(4) << grid[i][j].num;
			}
		}
		cout << endl;
	}
	cout << "——————————————" << endl;
}

void  Printword_x(board** grid, int r, int c, int x, int y)
{
	int i = 0; string str;
	for (i = y; i < c; i++)
	{
		if (grid[x][i].word == '*')
		{
			break;
		}
		str += grid[x][i].word;
	}
	cout << str << endl;
}


void  Printword_y(board** grid, int r, int c, int x, int y)
{
	int i = 0; string str;
	for (i = x; i < r; i++)
	{
		if (grid[i][y].word == '*')
		{
			break;
		}
		str += grid[i][y].word;
	}
	cout << str << endl;
}


void Wordboard(board** grid, int r, int c)
{
	int i = 0; int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (grid[i][j].num != 0)
			{
				Printword_x(grid, r,c,i, j);
			}
		}
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (grid[i][j].num != 0)
			{
				Printword_y(grid,r,c, i, j);
			}
		}
	}
}

int main()
{	
	srand((unsigned char)time(NULL));
	int r = 0; int c = 0; int word_num = 0;
	int i = 0; int j = 0;
	board** grid=NULL;
	cin >> r; cin >> c;
	grid = new board * [r];
	for (i = 0; i < c; i++)
	{
		grid[i] = new board[c];
	}
	Initboard(grid, r, c);//初始化
	Printboard(grid, r, c);//打印
	word_num=Numboard(grid, r, c);//编号
	Printnum(grid, r, c);//打印
	Wordboard(grid, r, c);//打印
	system("pause");
	return 0;
}