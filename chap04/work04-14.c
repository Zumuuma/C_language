#include <stdio.h>

int main(void)
{
	int num;
	int i;

	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d", i % 10);
	}
	putchar('\n');
	return 0;
}