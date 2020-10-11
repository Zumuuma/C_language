#include <stdio.h>

#define NUMBER_OF_TIMES 2	 //�e�X�g�̉�
#define NUMBER_OF_PEOPLE 4	 //�w���̐l��
#define NUMBER_OF_SUBJECTS 3 //�Ȗڐ�

int main(void)
{
	int i, j, k;
	int score[NUMBER_OF_TIMES][NUMBER_OF_PEOPLE][NUMBER_OF_SUBJECTS] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
	int sum[NUMBER_OF_PEOPLE][NUMBER_OF_SUBJECTS] = {0}; //���v

	//�Q�񕪂̓_���̍��v�����߂�
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //�w���̐l���������������J��Ԃ��B
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //�Ȗڐ��������������J��Ԃ��B
		{
			for (i = 0; i < NUMBER_OF_TIMES; i++) //�e�X�g�̉񐔕������������J��Ԃ��B
			{
				sum[j][k] = sum[j][k] + score[i][j][k]; //sum[j][k]�����Z����͍̂ŏ���sum[j][k]�ɑ�������l��ێ����邽�߁B
			}
		}
	}

	//�P��ڂ̓_����\��
	puts("�P��ڂ̓_��");
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //�w���̐l���������������J��Ԃ��B
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //�Ȗڐ��������������J��Ԃ��B
		{
			for (i = 0; i < NUMBER_OF_TIMES - 1; i++) //�e�X�g�̉񐔕������������J��Ԃ��B
			{
				printf("%4d", score[i][j][k]);
			}
		}
		putchar('\n');
	}

	//2��ڂ̓_����\��
	puts("�Q��ڂ̓_��");
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //�w���̐l���������������J��Ԃ��B
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //�Ȗڐ��������������J��Ԃ��B
		{
			for (i = 1; i < NUMBER_OF_TIMES; i++) //�e�X�g�̉񐔕������������J��Ԃ��B
			{
				printf("%4d", score[i][j][k]);
			}
		}
		putchar('\n');
	}

	//���v�_��\��
	puts("���v�_");
	for (j = 0; j < NUMBER_OF_PEOPLE; j++) //�w���̐l���������������J��Ԃ��B
	{
		for (k = 0; k < NUMBER_OF_SUBJECTS; k++) //�Ȗڐ��������������J��Ԃ��B
		{
			printf("%4d", sum[j][k]);
		}
		putchar('\n');
	}

	return 0;
}