//��̐����l��ǂݍ���ŏ��Ɨ]���\��

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("2�̐�������͂��Ă��������B");
	printf("����a:");
	scanf("%d", &a);
	printf("����b:");
	scanf("%d", &b);

	printf("a��b�Ŋ����%d���܂�%d�ł��B\n", a / b, a % b);

	return 0;
}