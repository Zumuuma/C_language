#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts("�O�̐�������͂��Ă��������B");
	printf("����A:");
	scanf("%d", &a);
	printf("����B:");
	scanf("%d", &b);
	printf("����C:");
	scanf("%d", &c);

	if (a == b && b == c)
	{
		puts("�O�̒l�͓������ł��B");
	}
	else if (a == b || b == c || c == a)
	{
		puts("��̒l���������ł��B");
	}
	else
	{
		puts("�O�̒l�͈قȂ�܂��B");
	}

	return 0;
}