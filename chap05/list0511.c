//�w���̓_����ǂݍ���ōō��_�ƍŒ�_��\��

#include <stdio.h>

#define NUMBER 5 //�w���̐l��

int main(void)
{
	int i;
	int score[NUMBER]; //NUMBER�l�̊w���̓_��
	int max, min;	   //�ō��_�E�Œ�_

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &score[i]);
	}

	min = max = score[0];
	for (i = 1; i < NUMBER; i++)
	{
		if (score[i] > max)
		{
			max = score[i];
		}
		if (score[i] < min)
		{
			min = score[i];
		}
	}

	printf("�ō��_�F%d\n", max);
	printf("�Œ�_�F%d\n", min);

	return 0;
}