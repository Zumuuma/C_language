#include <stdio.h>

int main(void)
{
	int a, b, c, d, max;

	puts("�l�̐�������͂��Ă��������B");
	printf("����1:");
	scanf("%d", &a); //5
	printf("����2:");
	scanf("%d", &b); //6
	printf("����3:");
	scanf("%d", &c); //7
	printf("����4:");
	scanf("%d", &d); //8

	max = a;

	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}

	printf("�ő�l��%d�ł��B\n", max);

	return 0;
}