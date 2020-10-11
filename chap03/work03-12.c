//“Ç‚İ‚ñ‚¾®”’l‚ÍŠï”‚Å‚ ‚é‚©‹ô”‚Å‚ ‚é‚©

#include <stdio.h>

int main(void)
{
	int no;

	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &no);

	switch (no % 2)
	{
	case 0:
		puts("‚»‚Ì”‚Í‹ô”‚Å‚·B");
		break;
	case 1:
		puts("‚»‚Ì”‚ÍŠï”‚Å‚·B");
		break;
	}

	return 0;
}