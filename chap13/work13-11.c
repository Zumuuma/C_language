#include <stdio.h>

int main(void)
{
	FILE *fp;
	double Array[10] = {10.5, 11.5, 12.5, 13.5, 14.5, 15.5, 16.5, 17.5, 19.5, 20.5};

	puts("�z��Array������o�����v�f�̒l��");
	for (int i = 0; i < 10; i++)
	{
		printf("%lf ", Array[i]);
	}
	puts("�ł��B");

	//��������
	if ((fp = fopen("Array.bin", "wb")) == NULL) //�I�[�v��
	{
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		fwrite(Array, sizeof(double), 10, fp); //��������
		fclose(fp);							   //�N���[�Y
	}

	//�ǂݎ��
	if ((fp = fopen("Array.bin", "rb")) == NULL) //�I�[�v��
	{
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		fread(Array, sizeof(double), 10, fp); //�ǂݎ��
		puts("�t�@�C��������o�����v�f�̒l��");
		for (int i = 0; i < 10; i++)
		{
			printf("%lf ", Array[i]);
		}
		puts("�ł��B");
		fclose(fp); //�N���[�Y
	}

	return 0;
}