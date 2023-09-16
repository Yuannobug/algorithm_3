#include<iostream>
using namespace std;
#include<ctime>
#include<string>
#include<iomanip>

void Printboard(char board[5][5])
{
	int i = 0; int j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(4) << board[i][j];
		}
		cout << endl;
	}
	cout << endl<<endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	int row = 0; int column = 0; 
	int i = 0; int j = 0; int k = 0; int judge = 1;
	char board[5][5] = { 0 }; string str;
	row = rand() % 5;
	column = rand() % 5;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			board[i][j] = 'A' + k;
			k++;
		}
	}
	board[row][column] = ' ';
	Printboard(board);
	cin >> str;
	for (i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
		case 'A':
			if (row == 0)
			{
				judge = 0;
			}
			else
			{
				board[row][column] = board[row - 1][column];
				board[row - 1][column]=' ';
				row--;
			}
			break;//ÉÏÒÆ
		case 'B':
			if (row == 4)
			{
				judge = 0;
			}
			else
			{
				board[row][column] = board[row + 1][column];
				board[row + 1][column] = ' ';
				row++;
			}
			break;//ÏÂÒÆ
		case 'L':
			if (column == 0)
			{
				judge = 0;
			}
			else
			{
				board[row][column] = board[row ][column-1];
				board[row ][column-1] = ' ';
				column--;
			}
			break;//×óÒÆ
		case 'R':
			if (column == 4)
			{
				judge = 0;
			}
			else
			{
				board[row][column] = board[row][column + 1];
				board[row][column +1] = ' ';
				column++;
			}
			break;//ÓÒÒÆ
		}
		if (judge == 0)
		{
			break;
		}
	}
	if (judge == 0)
	{
		cout << "This puzzle has no final configuration" << endl;
	}
	else
	{
		Printboard(board);
	}
	system("pause");
	return 0;
}