#include <stdio.h>
#include <string.h>

typedef struct individual_data
{
	char name[100];
	double height;
	double weight;
} info;

void swap_info(info *x, info *y)
{
	info tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort_by_height(info a[], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j - 1].height > a[j].height)
			{
				swap_info(&a[j - 1], &a[j]);
			}
		}
	}
}

int main(void)
{
	FILE *fp;
	info data[256];		   //構造体使う準備
	int number = 0;		   //人数
	char name[100];		   //名前
	double height, weight; //身長・体重
	double hsum = 0.0;	   //身長の合計
	double wsum = 0.0;	   //体重の合計

	if ((fp = fopen("hw.dat", "r")) == NULL) //オープン
	{
		printf("\aファイルをオープンできません。\n");
	}
	else
	{
		while (fscanf(fp, "%s%lf%lf", data[number].name, &data[number].height, &data[number].weight) == 3)
		{
			hsum += data[number].height;
			wsum += data[number].weight;
			number++;
		}

		sort_by_height(data, number);

		for (int i = 0; i < number; i++)
		{
			printf("%-10s %5.1f %5.1f\n", data[i].name, data[i].height, data[i].weight);
		}

		printf("----------------------\n");
		printf("平均       %5.1f %5.1f\n", hsum / number, wsum / number);
		fclose(fp); //クローズ
	}

	return 0;
}