#include <stdio.h>

#define NUMBER 80 //�l���̏��

int main(void)
{
	int i, j, max;
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

	putchar('\n');

	max = distribution[0];	  //�ϐ�max�ɔz��O�Ԗڂ̒l�����B
	for (i = 1; i <= 10; i++) //�c��̔z��P�`�P�O�Ԗڂ̒l�����Ă��������c
	{
		if (max < distribution[i]) //�����z��P�`�P�O�ԖڂŔz��O�Ԗڂ����傫���l����������
		{
			max = distribution[i]; //�ϐ�max�ɂ��̒l�����B
		}
	}

	for (i = max; i > 0; i--) //�ϐ�max�́��̍ő���B�O����for�͈�ԏ�̗񂩂猩�Ă����B
	{
		for (j = 0; j <= 10; j++) //�ϐ�j�͔z��ԍ��B������for�͈ȉ���if���̏����ɍ����΁����v�����g����B
		{
			if (i == distribution[j]) //���̍ő�l���z��̒��̌��𓯂�(�������l)��������
			{
				printf("*  ");	   //�����v�����g����B
				distribution[j]--; //�z��̒��̐��l���[�P����B
			}
			else
			{
				printf("   "); //��L�̏����ɍ���Ȃ�������A�󔒂��v�����g����B
			}
		}
		putchar('\n');
	}

	printf("-----------------------------------\n");
	printf("0 10 20 30 40 50 60 70 80 90 100\n");

	return 0;
}