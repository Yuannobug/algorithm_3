//������룺

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

//��ȷ����
#include<stdio.h>
#include<string.h>//Ӧ����ͷ�ļ�string.h

#define maxn 10000000+10

char s[maxn];//����̫��Ӧ����������

int main()
{
	scanf_s("%s", s);
	int tot = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '1')tot++;//Ӧ���ַ�1��Ƚ�
	}
	printf("%d\n", tot);
	return 0;//Ӧreturn 0
}