#include <stdio.h>

#define NUMBER_OF_PEOPLE 6
#define NUMBER_OF_SUBJECTS 2

int main(void)
{
	int i, j;
	int sum_J = 0, sum_M = 0, ave_J = 0, ave_M = 0, sum_Stu = 0;
	int scoreOfStudent[NUMBER_OF_PEOPLE];
	int score[NUMBER_OF_PEOPLE][NUMBER_OF_SUBJECTS]; //�w���̓_��

	printf("����Ɛ��w�̏��ɓ_������͂��Ă��������B\n");
	for (i = 0; i < NUMBER_OF_PEOPLE; i++)
	{
		printf("%d�l��", i + 1);
		for (j = 0; j < NUMBER_OF_SUBJECTS; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < NUMBER_OF_PEOPLE; i++) //�Ȗڂ��Ƃ̍���̍��v
	{
		sum_J = sum_J + score[i][0];
	}
	for (i = 0; i < NUMBER_OF_PEOPLE; i++) //�Ȗڂ��Ƃ̐��w�̍��v
	{
		sum_M = sum_M + score[i][1];
	}

	ave_J = sum_J / NUMBER_OF_PEOPLE; //�Ȗڂ��Ƃ̍���̕���
	ave_M = sum_M / NUMBER_OF_PEOPLE; //�Ȗڂ��Ƃ̐��w�̕���

	puts("�Ȗڂ��Ƃ̍��v�_�ƕ��ϓ_");
	printf("����̍��v�_�F%d�@/", sum_J);
	printf("�@���w�̍��v�_�F%d\n", sum_M);

	printf("����̕��ϓ_�F%3d�@/", ave_J);
	printf("�@���w�̕��ϓ_�F%3d\n\n", ave_M);

	for (i = 0; i < NUMBER_OF_PEOPLE; i++)
	{
		for (j = 0; j < NUMBER_OF_SUBJECTS; j++)
		{
			sum_Stu = sum_Stu + score[i][j];
		}
		scoreOfStudent[i] = sum_Stu;
		sum_Stu = 0;
	}

	puts("�w�����Ƃ̍��v�_�ƕ��ϓ_");
	for (i = 0; i < NUMBER_OF_PEOPLE; i++)
	{
		printf("%d�l�ځ@���v�_�G%3d�@���ϓ_�F%3d\n", i + 1, scoreOfStudent[i], scoreOfStudent[i] / NUMBER_OF_SUBJECTS);
	}

	return 0;
}