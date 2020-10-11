#include <stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d ", no);
		no--;
	}

	return 0;
}