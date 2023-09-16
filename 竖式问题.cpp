#include<iostream>
using namespace std;

#include<string>
#include<iomanip>
//P41

int main()
{
	int abc = 0; int de = 0; int result1 = 0; int result2 = 0; int result = 0;
	int i = 0; int judge = 1; int count = 0;
	string str; string str1; string tmp;
	cin >> str;
	for (abc = 100; abc < 1000; abc++)
	{
		for (de = 10; de < 100; de++)
		{
			judge = 1;
			result1 = abc * (de % 10);
			result2 = abc * (de / 10);
			result = abc * de;
			str1.clear();
			tmp = std::to_string(abc);//由int转换为string
			str1 += tmp;
			tmp = std::to_string(de);
			str1 += tmp;
			tmp = std::to_string(result1);
			str1 += tmp;
			tmp = std::to_string(result2);
			str1 += tmp;
			tmp = std::to_string(result);
			str1 += tmp;
			for (i = 0; i < str1.size(); i++)//判断字符是否存在在集合中
			{
				if (str.find( str1[i]) == string::npos)//没找到
				{
					judge = 0;
					break;
				}
			}
			if (judge == 1)//输出竖式
			{
				cout<<++count<<":" << endl;
				cout << setw(5) << abc << endl;
				cout << 'X' << setw(4) << de << endl;
				cout << "—————" << endl;
				cout << setw(5) << result1 << endl;
				cout << setw(4) << result2 << endl;
				cout << "—————" << endl;
				cout << setw(5) << result<< endl;
			}
		}
	}
	system("pause");
	return 0;
}