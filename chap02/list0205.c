//��̐����l��ǂݍ���ŕ��ϒl��\��

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����a:");
	scanf("%d", &a);
	printf("����b:");
	scanf("%d", &b);

	printf("�����̕��ς�%d�ł��B\n", (a + b) / 2);

	return 0;
}