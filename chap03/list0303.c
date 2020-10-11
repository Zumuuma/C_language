//“Ç‚İ‚ñ‚¾®”’l‚Í5‚ÅŠ„‚èØ‚ê‚È‚¢‚©

#include <stdio.h>

int main(void)
{
	int no;

	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &no);

	if (no % 5)
	{
		puts("‚»‚Ì”‚Í‚T‚ÅŠ„‚èØ‚ê‚Ü‚¹‚ñB");
	}
	else
	{
		puts("‚»‚Ì”‚Í‚T‚ÅŠ„‚èØ‚ê‚Ü‚·B");
	}
	return 0;
}