//�ō��_�����߂�

#include <stdio.h>

#define NUMBER 5 //�w���̐l��

int score[NUMBER]; //�z��̒�`

int top(void); //�֐�top�̊֐����^�錾

int main(void)
{
	extern int score[]; //�z��̐錾
	int i;

	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d�F", i + 1);
		scanf("%d", &score[i]);
	}
	printf("�ō��_��%d\n", top());

	return 0;
}

//--- �z��score�̍ő�l��Ԃ��֐�top�̊֐���`
int top(void)
{
	extern int score[]; //�z��̐錾
	int i;
	int max = score[0];

	for (i = 1; i < NUMBER; i++)
	{
		if (score[i] > max)
		{
			max = score[i];
		}
	}
	return max;
}