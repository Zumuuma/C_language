#include <stdio.h>

int main(void)
{
	int ch;
	int compare;
	FILE *sfp;				  //�R�s�[���t�@�C��
	FILE *dfp;				  //�R�s�[��t�@�C��
	char sname[FILENAME_MAX]; //�R�s�[���̃t�@�C����
	char dname[FILENAME_MAX]; //�R�s�[��̃t�@�C����

	printf("�R�s�[���t�@�C�����F");
	scanf("%s", sname);
	printf("�R�s�[��t�@�C�����F");
	scanf("%s", dname);

	if ((sfp = fopen(sname, "rb")) == NULL) //�t�@�C�������I�[�v��
	{
		printf("�R�s�[���t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		if ((dfp = fopen(dname, "wb")) == NULL) //�R�s�[����I�[�v��
		{
			printf("\a�R�s�[��t�@�C�����I�[�v���ł��܂���B\n");
		}
		else
		{
			while ((fread(&ch, sizeof(int), 1, sfp)) > 0)
			{
				fwrite(&ch, sizeof(int), 1, dfp);
			}
			fclose(dfp); //�R�s�[����N���[�Y
		}
		fclose(sfp); //�R�s�[�����N���[�Y
	}

	return 0;
}