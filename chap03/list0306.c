//�ǂݍ��񂾓�̐����l�͓�������

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("����1:");
	scanf("%d", &n1);
	printf("����2:");
	scanf("%d", &n2);

	if (n1 == n2)
	{
		puts("�����̒l�͓����ł��B");
	}
	else
	{
		puts("�����̒l�͈Ⴂ�܂��B");
	}

	return 0;
}