#include <stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &no);

	if (no >= 1)
	{
		while (no >= 1)
		{
			printf("%d ", no--);
		}
		printf("\n");
	}

	return 0;
}