#include <stdio.h>

int main(void)
{
	FILE *fp;
	char input[128];

	printf("�t�@�C��������͂��Ă��������F");
	scanf("%s", input);

	fp = fopen(input, "r"); //�t�@�C���̃I�[�v��

	if (fp == NULL)
	{
		printf("\a�t�@�C��\"%s\"���I�[�v���ł��܂���ł����B\n", input);
	}
	else
	{
		printf("\a�t�@�C��\"%s\"���I�[�v�����܂����B\n", input);
		fclose(fp); //�t�@�C���̃N���[�Y
	}

	return 0;
}