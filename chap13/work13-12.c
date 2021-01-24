//�O��̃v���O�������s���̓��t�Ǝ�����\������

#include <time.h>
#include <stdio.h>

char data_file[] = "datatime.bin"; //�t�@�C����

//---�O��̓��t�E�������擾�E�\��---
void get_data(void)
{
	FILE *fp;
	time_t current = time(NULL);
	struct tm *fetch_TM = localtime(&current);

	if ((fp = fopen(data_file, "rb")) == NULL) //�I�[�v��
	{
		printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
	}
	else
	{
		int year, month, day, h, m, s;

		fread(fetch_TM, sizeof(struct tm), 1, fp);
		printf("�O���%d�N%d��%d��%d��%d��%d�b�ł����B\n", fetch_TM->tm_year + 1900, fetch_TM->tm_mon + 1, fetch_TM->tm_mday, fetch_TM->tm_hour, fetch_TM->tm_min, fetch_TM->tm_sec);
		fclose(fp); //�N���[�Y
	}
}

//---����̓��t�E��������������---
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);			//���݂̗��
	struct tm *timer = localtime(&current); //�v�f�ʂ̎����i�n�����j

	if ((fp = fopen(data_file, "wb")) == NULL) //�I�[�v��
	{
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		fwrite(timer, sizeof(struct tm), 1, fp);
		fclose(fp); //�N���[�Y
	}
}

int main(void)
{
	get_data();

	put_data();

	return 0;
}