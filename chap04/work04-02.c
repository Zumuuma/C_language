#include <stdio.h>

int main(void)
{
	int a, b, x = 0, sum = 0;

	puts("��̐�������͂��Ă��������B");
	printf("����a:");
	scanf("%d", &a);
	printf("����b:");
	scanf("%d", &b);

	if (a <= b)
	{
		do
		{
			sum = sum + a;
			a++;
			x++;
		} while (a <= b);
		printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B\n", a - x, b, sum);
	}
	else
	{
		do
		{
			sum = sum + b;
			b++;
			x++;
		} while (b <= a);
		printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B\n", b - x, a, sum);
	}

	return 0;
}