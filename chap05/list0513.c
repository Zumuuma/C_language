//�S�l�̊w���̂R�Ȗڂ̃e�X�g�Q�񕪂̍��v�����߂ĕ\��

#include <stdio.h>

int main(void)
{
	int i, j;
	int score1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
	int score2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
	int sum[4][3]; //���v

	//�Q�񕪂̓_���̍��v�����߂�
	for (i = 0; i < 4; i++) //�S�l����
	{
		for (j = 0; j < 3; j++) //�R�Ȗڂ�
		{
			sum[i][j] = score1[i][j] + score2[i][j]; //�Q�񕪂����Z
		}
	}
	//�P��ڂ̓_����\��
	puts("�P��ڂ̓_��");
	for (i = 0; i < 4; i++) //�l����
	{
		for (j = 0; j < 3; j++) //�Ȗڕ�
		{
			printf("%4d", score1[i][j]);
		}
		putchar('\n');
	}

	//�Q��ڂ̓_����\��
	puts("�Q��ڂ̓_��");
	for (i = 0; i < 4; i++) //�l����
	{
		for (j = 0; j < 3; j++) //�Ȗڕ�
		{
			printf("%4d", score2[i][j]);
		}
		putchar('\n');
	}

	//���v�_��\��
	puts("���v�_");
	for (i = 0; i < 4; i++) //�l����
	{
		for (j = 0; j < 3; j++) //�Ȗڕ�
		{
			printf("%4d", sum[i][j]);
		}
		putchar('\n');
	}

	return 0;
}