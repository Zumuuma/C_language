//�S�l�̊w���̂R�Ȗڂ̃e�X�g�Q�񕪂̍��v�����߂ĕ\���i�֐��Łj

#include <stdio.h>

//---�S�s�R��̍s��a��b�̘a��c�Ɋi�[����---
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

//---�S�s�R��̍s��m��\��---
void mat_print(const int m[4][3])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", m[i][j]);
		}
		putchar('\n');
	}
}

int main(void)
{
	int score1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
	int score2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
	int sum[4][3]; //���v

	mat_add(score1, score2, sum); //�Q�񕪂̓_���̍��v�����߂�

	puts("�P��ڂ̓_��");
	mat_print(score1); //�P��ڂ̓_����\��
	puts("�Q��ڂ̓_��");
	mat_print(score2); //�Q��ڂ̓_����\��
	puts("���v�_");
	mat_print(sum); //���v�_��\��

	return 0;
}