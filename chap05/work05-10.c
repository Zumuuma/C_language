#include <stdio.h>

int main(void)
{
	int i, j, k;
	int sum = 0;
	int array1[4][3]; //�S�s�R��̍s��̓񎟌��z��
	int array2[3][4]; //�R�s�S��̍s��̓񎟌��z��

	printf("�S�s�R��̍s��ƂR�s�S��̍s��̐ς����߂܂��B\n");

	for (i = 0; i < 4; i++) //�S�s�R��̍s��̏���
	{
		for (j = 0; j < 3; j++)
		{
			printf("�S�s�R��̍s�����͂��Ă��������B\n");
			scanf("%d", &array1[i][j]);
		}
	}

	for (i = 0; i < 3; i++) //�R�s�S��̍s��̏���
	{
		for (j = 0; j < 4; j++)
		{
			printf("�R�s�S��̍s�����͂��Ă��������B\n");
			scanf("%d", &array2[i][j]);
		}
	}

	printf("�S�s�R��̍s��ƂR�s�S��̍s��̐ς�\n");

	for (k = 0; k < 4; k++) //�u�R�v�Ō�Ɉ�ԊO����for�̏����Bfor�̏����͓�������O���Ɍ������čs����B
	{
		for (i = 0; i < 4; i++) //�u�Q�v���ɂ�����for�̏������I����Ă����ԊO����for�̏����B
		{
			for (j = 0; j < 3; j++) //�u�P�v������for�̏������I����Ă���P�O����for�̏����B
			{
				sum = sum + (array1[k][j] * array2[j][i]);
			}
			printf("%3d ", sum);
			sum = 0;
		}
		putchar('\n');
	}

	return 0;
}