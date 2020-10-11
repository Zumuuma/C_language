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
			printf("+");
			if (i == num)
			{
				break;
			}
			printf("-");
			i = i + 2;
		}
	}

	return 0;
}