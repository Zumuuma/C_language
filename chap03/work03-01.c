#include <stdio.h>

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("����A:");
	scanf("%d", &a);
	printf("����B:");
	scanf("%d", &b);

	if (a % b)
	{
		puts("B��A�̖񐔂ł͂���܂���B");
	}
	else
	{
		puts("B��A�̖񐔂ł��B");
	}
	return 0;
}