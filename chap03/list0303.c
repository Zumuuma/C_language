//�ǂݍ��񂾐����l��5�Ŋ���؂�Ȃ���

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă�������:");
	scanf("%d", &no);

	if (no % 5)
	{
		puts("���̐��͂T�Ŋ���؂�܂���B");
	}
	else
	{
		puts("���̐��͂T�Ŋ���؂�܂��B");
	}
	return 0;
}