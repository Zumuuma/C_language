#include <stdio.h>

int main(void)
{
	int i, j;
	int inputMax, inputMin;

	puts("�����`�����܂��B");
	printf("��Ӂi���̂P�j�F");
	scanf("%d", &inputMin);
	printf("��Ӂi���̂Q�j�F");
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