#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;

	printf("³‚Ì®”F");
	scanf("%d", &num);

	if (num > 0)
	{
		while (i <= num)
		{
			puts("*");
			i++;
		}
	}
	return 0;
}