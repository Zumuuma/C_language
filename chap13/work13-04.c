#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	FILE *fp;
	int select;
	char name[100];
	double height, weight;

	if ((fp = fopen("info.dat", "w")) == NULL) //�I�[�v��
	{
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		while (true)
		{
			puts("���O�A�g���A�̏d��ǂݍ���Ńt�@�C���ɏ������݂܂��B");
			putchar('\n');
			printf("���O �g�� �̏d(���p�X�y�[�X�ŋ�؂�)�F");
			scanf("%s %lf %lf", name, &height, &weight);

			fprintf(fp, "%-10s %5.1f %5.1f\n", name, height, weight);

			printf("���͂𑱂��܂����H�@�͂��E�E�E�P/�������E�E�E�O�F");
			scanf("%d", &select);
			if (select == 0)
			{
				break;
			}
			putchar('\n');
		}
		fclose(fp); //�N���[�Y
	}

	return 0;
}