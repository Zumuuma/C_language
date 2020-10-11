#include <stdio.h>

int main(void)
{
	int i, j;
	int inputMax, inputMin;

	puts("長方形を作ります。");
	printf("一辺（その１）：");
	scanf("%d", &inputMin);
	printf("一辺（その２）：");
	scanf("%d", &inputMax);

	if (inputMin <= inputMax)
	{
		for (i = 1; i <= inputMin; i++)
		{
			for (j = 1; j <= inputMax; j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
	}
	else
	{
		for (i = 1; i <= inputMax; i++)
		{
			for (j = 1; j <= inputMin; j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
	}
	return 0;
}