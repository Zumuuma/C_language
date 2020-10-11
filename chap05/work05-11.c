#include <stdio.h>

#define NUMBER_OF_PEOPLE 6
#define NUMBER_OF_SUBJECTS 2

int main(void)
{
	int i, j;
	int sum_J = 0, sum_M = 0, ave_J = 0, ave_M = 0, sum_Stu = 0;
	int scoreOfStudent[NUMBER_OF_PEOPLE];
	int score[NUMBER_OF_PEOPLE][NUMBER_OF_SUBJECTS]; //学生の点数

	printf("国語と数学の順に点数を入力してください。\n");
	for (i = 0; i < NUMBER_OF_PEOPLE; i++)
	{
		printf("%d人目", i + 1);
		for (j = 0; j < NUMBER_OF_SUBJECTS; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < NUMBER_OF_PEOPLE; i++) //科目ごとの国語の合計
	{
		sum_J = sum_J + score[i][0];
	}
	for (i = 0; i < NUMBER_OF_PEOPLE; i++) //科目ごとの数学の合計
	{
		sum_M = sum_M + score[i][1];
	}

	ave_J = sum_J / NUMBER_OF_PEOPLE; //科目ごとの国語の平均
	ave_M = sum_M / NUMBER_OF_PEOPLE; //科目ごとの数学の平均

	puts("科目ごとの合計点と平均点");
	printf("国語の合計点：%d　/", sum_J);
	printf("　数学の合計点：%d\n", sum_M);

	printf("国語の平均点：%3d　/", ave_J);
	printf("　数学の平均点：%3d\n\n", ave_M);

	for (i = 0; i < NUMBER_OF_PEOPLE; i++)
	{
		for (j = 0; j < NUMBER_OF_SUBJECTS; j++)
		{
			sum_Stu = sum_Stu + score[i][j];
		}
		scoreOfStudent[i] = sum_Stu;
		sum_Stu = 0;
	}

	puts("学生ごとの合計点と平均点");
	for (i = 0; i < NUMBER_OF_PEOPLE; i++)
	{
		printf("%d人目　合計点；%3d　平均点：%3d\n", i + 1, scoreOfStudent[i], scoreOfStudent[i] / NUMBER_OF_SUBJECTS);
	}

	return 0;
}