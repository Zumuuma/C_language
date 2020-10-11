#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, input;

	puts("ピラミッドを作ります。");
	printf("何段ですか：");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		for (j = input - i; j > 0; j--)
		{
			putchar(' ');
		}
		for (j = 0; j < (i - 1) * 2 + 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}