#include <stdio.h>

#define NUMBER 80 //人数の上限

int main(void)
{
	int i, j, max;
	int num;					//実際の人数
	int score[NUMBER];			//学生の点数
	int distribution[11] = {0}; //点数の分布

	printf("人数を入力してください：");

	do
	{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
		{
			printf("\a１～%dで入力してください：", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力してください。\n", num);

	for (i = 0; i < num; i++)
	{
		printf("%2d番：", i + 1);
		do
		{
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
			{
				printf("０～１００で入力してください：");
			}
		} while (score[i] < 0 || score[i] > 100);
		distribution[score[i] / 10]++;
	}

	putchar('\n');

	max = distribution[0];	  //変数maxに配列０番目の値を代入。
	for (i = 1; i <= 10; i++) //残りの配列１～１０番目の値も見ていきたい…
	{
		if (max < distribution[i]) //もし配列１～１０番目で配列０番目よりも大きい値があったら
		{
			max = distribution[i]; //変数maxにその値を代入。
		}
	}

	for (i = max; i > 0; i--) //変数maxは＊の最大個数。外側のforは一番上の列から見ていく。
	{
		for (j = 0; j <= 10; j++) //変数jは配列番号。内側のforは以下のif文の条件に合えば＊をプリントする。
		{
			if (i == distribution[j]) //＊の最大値が配列の中の個数を同じ(同じ数値)だったら
			{
				printf("*  ");	   //＊をプリントする。
				distribution[j]--; //配列の中の数値をー１する。
			}
			else
			{
				printf("   "); //上記の条件に合わなかったら、空白をプリントする。
			}
		}
		putchar('\n');
	}

	printf("-----------------------------------\n");
	printf("0 10 20 30 40 50 60 70 80 90 100\n");

	return 0;
}