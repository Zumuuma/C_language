//�����炭�s���S�ȃv���O�����B�ҏW�ł���l���͂��肢���܂��I
//���F�S�s�R��̍s��a�ƂR�s�S��̍s��b�̐ς��A�S�s�S��̍s��c�Ɋi�[����֐����쐬����B

#include <stdio.h>

int array1[4][3], array2[3][4], sum[4][4] = {0};

//4�s3��̍s��a�����
void input_array1()
{

	int i;

	printf("�S�s�R��̍s�����͂��ĉ������B�i�����Ɛ����̊Ԃ͔��p�X�y�[�X�j\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%d %d %d", &array1[i][0], &array1[i][1], &array1[i][2]);
	}
}

//3�s4��̍s��b�����
void input_array2()
{

	int i;

	printf("�R�s�S��̍s�����͂��ĉ������B�i�����Ɛ����̊Ԃ͔��p�X�y�[�X�j\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &array2[i][0], &array2[i][1], &array2[i][2], &array2[i][3]);
	}
}

//b*a��c�ɑ��
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{

	int i, j, k;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 3; k++)
			{
				c[i][j] = c[i][j] + a[j][k] * b[k][j];
			}
		}
	}
}

//c���o��
void mat_print(const int c[4][4])
{

	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	printf("�S�s�R��̍s��ƂR�s�S��̍s��̐ς����߂܂��B\n");
	input_array1();
	input_array2();
	printf("�S�s�R��̍s��ƂR�s�S��̍s��̐ς�\n");
	mat_mul(array1, array2, sum);
	mat_print(sum);

	return 0;
}