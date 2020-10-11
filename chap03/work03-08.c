#include <stdio.h>

int main(void)
{
	int n1, n2, ans;

	puts("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”1:");
	scanf("%d", &n1); //30
	printf("®”2:");
	scanf("%d", &n2); //10

	if (n1 > n2)
	{
		ans = n1 - n2;
	}
	else
	{
		ans = n2 - n1;
	}

	printf("‚»‚ê‚ç‚Ì·‚Í%d‚Å‚·B\n", ans);

	return 0;
}