#include<iostream>
using namespace std;

int mypow(int a, int x)
{
	int i = 0; int sum = 1;
	for (i = 0; i < x; i++)
	{
		sum  *= a;
	}
	return sum;
}

float weigh(float weight, string num)
{
	int i = 0; int sum = 0;
	for (i = 0; i < num.size(); i++)
	{
		sum += (num[i] - '0') * mypow(10, i);
	}
	return weight * sum;
}

int main()
{
	string str; string num;
	float weight = 0; float sum = 0;
	int i = 0; 
	cin >> str;
	for (i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
		case 'C':sum += weigh(weight, num); weight = 12.01; num.clear(); num += "1"; break;
		case 'H':sum += weigh(weight, num); weight = 1.008; num.clear(); num += "1"; break;
		case 'O':sum += weigh(weight, num); weight = 16.00; num.clear(); num += "1"; break;
		case 'N':sum += weigh(weight, num); weight = 14.01; num.clear(); num += "1"; break;
		default:
			if (num == "1")
			{
				num.clear();
			}
			num += str[i];
			break;
		}
	}
	sum += weigh(weight, num);
	cout << sum << "g/mol"<<endl;
	system("pause");
	return 0;
}