//�ǂݍ��񂾐����l��5�Ŋ���؂�Ȃ���΁A���̎|��\������B

#include <stdio.h>

int main(void)
{
	int no;

	printf("��������͂��Ă�������:");
	scanf("%d", &no);

	if (no % 5)
	{
		puts("���̐���5�Ŋ���؂�܂���B");
	}
	return 0;
}