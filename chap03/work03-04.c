#include <stdio.h>

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����A:");
	scanf("%d", &a);
	printf("����B:");
	scanf("%d", &b);

	if (a == b)
	{
		puts("A��B�͓������ł��B");
	}
	else if (a > b)
	{
		puts("A��B���傫���ł��B");
	}
	else
	{
		puts("A��B��菬�����ł��B");
	}

	return 0;
}