#include <time.h>
#include <stdio.h>

char data_file[] = "datatime.dat"; //�t�@�C����

//---�O��̓��t�E�������擾�E�\��---
void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "r")) == NULL) //�I�[�v��
	{
		printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
	}
	else
	{
		int year, month, day, h, m, s;
		char feeling[32];

		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, feeling);
		printf("�O���%d�N%d��%d��%d��%d��%d�b�ŁA�C����%s�ł����I�I\n", year, month, day, h, m, s, feeling);
		fclose(fp); //�N���[�Y
	}
}

//---����̓��t�E��������������---
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);			//���݂̗��
	struct tm *timer = localtime(&current); //�v�f�ʂ̎����i�n�����j
	char feeling[32];

	printf("���݂̋C���́F");
	scanf("%s", feeling);

	if ((fp = fopen(data_file, "w")) == NULL) //�I�[�v��
	{
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		fprintf(fp, "%d %d %d %d %d %d %s\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec, feeling);
		fclose(fp); //�N���[�Y
	}
}

int main(void)
{
	get_data(); //�O��̓��t�E�������擾�E�\��

	put_data(); //����̓��t�E��������������

	return 0;
}