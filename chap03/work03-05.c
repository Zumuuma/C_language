#include <stdio.h>

int main()
{

	int a, b;
	puts("��̐�������͂��ĉ������B");
	printf("����A�F");
	scanf("%d", &a);
	printf("����B�F");
	scanf("%d", &b);

	if (a == b)
	{
		printf("a == b : 1\n");
	}
	else
	{
		printf("a == b : 0\n");
	}
	if (a != b)
	{
		printf("a != b : 1\n");
	}
	else
	{
		printf("a != b : 0\n");
	}
	if (a < b)
	{
		printf("a < b : 1\n");
	}
	else
	{
		printf("a < b : 0\n");
	}
	if (a > b)
	{
		printf("a > b : 1\n");
	}
	else
	{
		printf("a > b : 0\n");
	}
	if (a <= b)
	{
		printf("a <= b : 1\n");
	}
	else
	{
		printf("a <= b : 0\n");
	}
	if (a >= b)
	{
		printf("a >= b : 1\n");
	}
	else
	{
		printf("a >= b : 0\n");
	}

	return 0;
}