//�ǂݍ��񂾐����l�̕����𔻒�

#include <stdio.h>

int main(void)
{
	int retry;
	int no;

	do
	{
		printf("��������͂��Ă�������:");
		scanf("%d", &no);

		if (no == 0)
		{
			puts("���̐��͂O�ł��B");
		}
		else if (no > 0)
		{
			puts("���̐��͐��ł��B");
		}
		else
		{
			puts("���̐��͕��ł��B");
		}

		printf("���s���܂����H<Yes...0/No...9>");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}