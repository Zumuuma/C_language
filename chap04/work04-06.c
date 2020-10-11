#include <stdio.h>

int main(void)
{
	int i, no;

	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &no);
	i = 2;
	while (i < no)
	{
		printf("%d ", i);
		i = i + 2;
	}
	printf("\n");

	return 0;
}