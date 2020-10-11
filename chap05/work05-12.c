#include <stdio.h>

#define NUMBER_OF_TIMES 2	 //テストの回数
#define NUMBER_OF_PEOPLE 4	 //学生の人数
#define NUMBER_OF_SUBJECTS 3 //科目数

int main(void)
{
	int i, j, k;
	int score[NUMBER_OF_TIMES][NUMBER_OF_PEOPLE][NUMBER_OF_SUBJECTS] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
	int sum[NUMBER_OF_PEOPLE][NUMBER_OF_SUBJECTS] = {0}; //合計

	//２回分の点数の合計を求める
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //学生の人数分だけ処理を繰り返す。
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //科目数分だけ処理を繰り返す。
		{
			for (i = 0; i < NUMBER_OF_TIMES; i++) //テストの回数分だけ処理を繰り返す。
			{
				sum[j][k] = sum[j][k] + score[i][j][k]; //sum[j][k]を加算するのは最初にsum[j][k]に代入した値を保持するため。
			}
		}
	}

	//１回目の点数を表示
	puts("１回目の点数");
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //学生の人数分だけ処理を繰り返す。
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //科目数分だけ処理を繰り返す。
		{
			for (i = 0; i < NUMBER_OF_TIMES - 1; i++) //テストの回数分だけ処理を繰り返す。
			{
				printf("%4d", score[i][j][k]);
			}
		}
		putchar('\n');
	}

	//2回目の点数を表示
	puts("２回目の点数");
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //学生の人数分だけ処理を繰り返す。
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //科目数分だけ処理を繰り返す。
		{
			for (i = 1; i < NUMBER_OF_TIMES; i++) //テストの回数分だけ処理を繰り返す。
			{
				printf("%4d", score[i][j][k]);
			}
		}
		putchar('\n');
	}

	//合計点を表示
	puts("合計点");
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //学生の人数分だけ処理を繰り返す。
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //科目数分だけ処理を繰り返す。
		{
			printf("%4d", sum[j][k]);
		}
		putchar('\n');
	}

	return 0;
}