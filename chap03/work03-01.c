#include <stdio.h>

int main(void)
{
	int a, b;

	puts("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”A:");
	scanf("%d", &a);
	printf("®”B:");
	scanf("%d", &b);

	if (a % b)
	{
		puts("B‚ÍA‚Ì–ñ”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB");
	}
	else
	{
		puts("B‚ÍA‚Ì–ñ”‚Å‚·B");
	}
	return 0;
}