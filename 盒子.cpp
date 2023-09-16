#include<iostream>
using namespace std;

typedef struct face
{
	int lenght;
	int weight;
	int judge;
}face;

int is_sameface(face a,face b)//判断面面相等
{
	if (a.lenght == b.lenght && a.weight == b.weight)
	{
		return 1;
	}
	if (a.lenght == b.weight && a.weight == b.lenght)
	{
		return 1;
	}
	return 0;
}

int main()
{
	face box[6] = { 0 };
	int i = 0; int j = 0; int l = 0; int w = 0;
	int box_lenght = 0; int box_weight = 0; int box_height = 0;
	int lnum = 0; int wnum = 0; int hnum = 0;
	for (i = 0; i < 6; i++)
	{
		cin >> l; cin >> w;
		box[i].judge = 0;
		box[i].lenght = l;
		box[i].weight = w;
		if (box_lenght == 0)
		{
			box_lenght = l;
		}
		if (box_weight == 0)
		{
			box_weight = w;
		}
		else if (((l != box_lenght&&l!=box_weight)|| (w != box_lenght && w != box_weight)) &&box_height==0)
		{
			if ((l != box_lenght && l != box_weight) && (w != box_lenght && w != box_weight))
			{
				cout << "false" << endl;
				system("pause");
				return 0;
			}
			else if (l != box_lenght && l != box_weight)
			{
				box_height = l;
			}
			else
			{
				box_height = w;
			}

		}
		if (l == box_lenght&&w==box_weight|| w == box_lenght && l == box_weight)
		{
			lnum++; wnum++;
		}
		if (l == box_lenght && w == box_height || w == box_lenght && l == box_height)
		{
			lnum++; hnum++;
		}
		if (l == box_weight && w == box_height || w == box_weight && l == box_height)
		{
			hnum++; wnum++;
		}
	}
	if (hnum +lnum +wnum != 12)//棱判断不符合
	{
		cout << "false" << endl;
		system("pause");
		return 0;
	}
	if (hnum == 0)
	{
		box_height = box_weight;
	}
	for (i = 0; i < 6; i++)
	{
		if (box[i].judge == 1)
		{
			continue;
		}
		for (j = i + 1; j < 6; j++)
		{
			if (is_sameface(box[i], box[j]))
			{
				box[i].judge = 1;
				box[j].judge = 1;
				break;
				//if (box_lenght == 0 && box_weight == 0)
				//{
				//	box_lenght = box[i].lenght;
				//	box_height = box[i].weight;
				//}
				//else if(box[i].lenght!= box_lenght&& box[i].lenght != box_height)
			}
		}
		if (box[i].judge == 0)
		{
			cout << "false" << endl;
			system("pause");
			return 0;
		}
	}
	cout << "true"<<box_lenght << "  " <<box_weight << "  " <<box_height<<"  " << endl;
	system("pause");
	return 0;
}