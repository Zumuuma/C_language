//�ǂݍ��񂾐����l�͊�ł��邩�����ł��邩

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă�������:");
	scanf("%d", &no);

	switch (no % 2)
	{
	case 0:
		puts("���̐��͋����ł��B");
		break;
	case 1:
		puts("���̐��͊�ł��B");
		break;
	}

	return 0;
}