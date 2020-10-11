#include <stdio.h>

int main(void)
{
	int a, b, ans;

	puts("“ñ‚Â‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”A:");
	scanf("%d", &a);
	printf("®”B:");
	scanf("%d", &b);

	ans = (a > b) ? a - b : b - a;

	if (ans <= 10 || ans <= -10)
	{
		puts("‚»‚ê‚ç‚Ì·‚Í10ˆÈ‰º‚Å‚·B");
	}
	else
	{
		puts("‚»‚ê‚ç‚Ì·‚Í11ˆÈã‚Å‚·B");
	}

	return 0;
}