//�ǂݍ��񂾐����l��3�Ŋ������]���\��(switch��)

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă�������:");
	scanf("%d", &no);

	switch (no % 3)
	{
	case 0:
		puts("���̐���3�Ŋ���؂�܂��B");
		break;
	case 1:
		puts("���̐���3�Ŋ������]���1�ł��B");
		break;
	case 2:
		puts("���̐���3�Ŋ������]���2�ł��B");
		break;
	}

	return 0;
}