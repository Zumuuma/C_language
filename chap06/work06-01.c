//�Q�̐����̂����A���������̒l��Ԃ��B

#include <stdio.h>

int min2(int a, int b)
{
	int min = a;

	if (b < min)
	{
		min = b;
	}

	return min;
}

int main(void)
{
	int a, b;

	puts("�Q�̐�������͂��Ă��������B");
	printf("�����P�F");
	scanf("%d", &a);
	printf("�����Q�F");
	scanf("%d", &b);

	printf("���������̒l��%d�ł��B\n", min2(a, b));

	return 0;
}