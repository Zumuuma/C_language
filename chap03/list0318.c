//�ǂݍ��񂾐����l��3�Ŋ�������]��\��

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă�������:");
	scanf("%d", &no);

	if (no % 3 == 0)
	{
		puts("���̐���3�Ŋ���؂�܂��B");
	}
	else if (no % 3 == 1)
	{
		puts("���̐���3�Ŋ������]���1�ł��B");
	}
	else
	{
		puts("���̐���3�Ŋ������]���2�ł��B");
	}

	return 0;
}