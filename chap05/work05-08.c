#include <stdio.h>

#define NUMBER 80 //�l���̏��

int main(void)
{
	int i, j;
	int num;					//���ۂ̐l��
	int score[NUMBER];			//�w���̓_��
	int distribution[11] = {0}; //�_���̕��z

	printf("�l������͂��Ă��������F");

	do
	{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
		{
			printf("\a�P�`%d�œ��͂��Ă��������F", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d�l�̓_������͂��Ă��������B\n", num);

	for (i = 0; i < num; i++)
	{
		printf("%2d�ԁF", i + 1);
		do
		{
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
			{
				printf("�O�`�P�O�O�œ��͂��Ă��������F");
			}
		} while (score[i] < 0 || score[i] > 100);
		distribution[score[i] / 10]++;
	}

	puts("\n---���z�O���t---");
	for (i = 0; i <= 9; i++) //100�_����
	{
		printf("%3d �`%3d�F", i * 10, i * 10 + 9);
		for (j = 0; j < distribution[i]; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	printf("      100�F"); //100�_

	for (j = 0; j < distribution[10]; j++)
	{
		putchar('*');
	}
	putchar('\n');

	return 0;
}