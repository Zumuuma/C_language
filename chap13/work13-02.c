#include <stdio.h>

int main(void)
{
	FILE *fp;
	char input[128];

	printf("�t�@�C��������͂��Ă��������F");
	scanf("%s", input);

	fp = fopen(input, "w"); //�t�@�C���̃I�[�v��

	printf("\a�t�@�C��\"%s\"�̒��g�����ׂď������܂����B\n", input);

	fclose(fp); //�t�@�C���̃N���[�Y

	return 0;
}