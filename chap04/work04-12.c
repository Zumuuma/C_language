#include <stdio.h>

int main(void)
{
	int no, count = 0;
	do
	{
		printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("\a³‚Å‚È‚¢”‚ğ“ü—Í‚µ‚È‚¢‚Å‚­‚¾‚³‚¢B");
		}
	} while (no <= 0);

	printf("%d‚Í", no);
	while (no > 0)
	{
		no /= 10;
		count++;
	}
	printf("%dŒ…‚Å‚·B", count);

	return 0;
}