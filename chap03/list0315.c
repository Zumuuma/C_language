//�ǂݍ��񂾓�̐����l�̍������߂ĕ\��(�������Z�q)

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("����1:");
	scanf("%d", &n1);
	printf("����2:");
	scanf("%d", &n2);

	printf("�����̍���%d�ł��B\n", (n1 > n2) ? n1 - n2 : n2 - n1);

	return 0;
}