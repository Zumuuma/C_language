#include <stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”:");
	scanf("%d", &no);
	if (no > 0)
	{
		while (no-- > 0)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}