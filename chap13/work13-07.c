#include <stdio.h>

int main(void)
{
	int ch, count = 0;
	FILE *fp;
	char fname[FILENAME_MAX]; //�t�@�C����

	printf("�t�@�C�����F");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		while ((ch = fgetc(fp)) != EOF)
		{
			if ('0' <= ch && ch <= '9')
			{
				count++;
			}
		}
	}

	printf("���̃t�@�C���̒��̐��������̌���%d�ł��B\n", count);

	return 0;
}