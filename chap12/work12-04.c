#include <stdio.h>
#include <string.h>

#define NUMBER 5	//学生の人数
#define NAME_LEN 64 //名前の文字数

//===学生を表す構造体===
typedef struct
{
	char name[NAME_LEN]; //名前
	int height;			 //身長
	float weight;		 //体重
	long schols;		 //奨学金
} Student;

//---xおよびyが指す学生を交換---
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

//---学生の配列aの先頭n個の要素を身長の昇順にソート---
void sort_by_height(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j - 1].height > a[j].height)
			{
				swap_Student(&a[j - 1], &a[j]);
			}
		}
	}
}

//---学生の配列aの先頭n個の要素を名前の昇順にソート---
void sort_by_name(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (strcmp(a[j - 1].name, a[j].name) > 0)
			{
				swap_Student(&a[j - 1], &a[j]);
			}
		}
	}
}

//---キーボードからの読み込み---
void input_data(Student blank[])
{
	int i;

	printf("5人の名前、身長、体重、奨学金を入力してください(各メンバとメンバの区切りは半角スペース)\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d人目のデータを入力してください：", i + 1);
		scanf("%s %d %f %ld", blank[i].name, &blank[i].height, &blank[i].weight, &blank[i].schols);
	}
	putchar('\n');
}

int main(void)
{
	int i;
	int sort_select;
	Student std[NUMBER];

	input_data(std);

	do
	{
		puts("どちらの方法でソートしますか？");
		printf("身長の昇順にソート・・・１/名前の昇順にソート・・・２：");
		scanf("%d", &sort_select);
	} while (sort_select < 1 || sort_select > 2);

	for (i = 0; i < NUMBER; i++)
	{
		printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	}

	switch (sort_select)
	{
	case 1:
		sort_by_height(std, NUMBER); //身長の昇順にソート
		break;
	case 2:
		sort_by_name(std, NUMBER); //名前の昇順にソート
		break;
	default:
		break;
	}

	puts("\n身長順にソートしました。");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	}

	return 0;
}