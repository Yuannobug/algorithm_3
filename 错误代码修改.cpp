//错误代码：

//#include<stdio.h>
//
//
//#define maxn 10000000+10
//
//int main()
//{
//	char s[maxn];
//	scanf_s("%s", s);
//	int tot = 0;
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (s[i] == 1)tot++;
//	}
//	printf("%d\n", tot);
//	return 0;
//}

//正确代码
#include<stdio.h>
#include<string.h>//应包含头文件string.h

#define maxn 10000000+10

char s[maxn];//数组太大应定义在外面

int main()
{
	scanf_s("%s", s);
	int tot = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '1')tot++;//应和字符1相比较
	}
	printf("%d\n", tot);
	return 0;//应return 0
}