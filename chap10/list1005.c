//“ñ‚Â‚Ì®”‚Ì˜a‚Æ·‚ğ‹‚ß‚é

#include <stdio.h>

//---n1‚Æn2‚Ì˜a‚Æ·‚ğ*sum‚Æ*diff‚ÉŠi”[---
void sum_diff(int n1, int n2, int *sum, int *diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int sum = 0, diff = 0;

	puts("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	printf("®”AF");
	scanf("%d", &na);
	printf("®”BF");
	scanf("%d", &nb);

	sum_diff(na, nb, &sum, &diff);

	printf("˜a‚Í%d‚Å·‚Í%d‚Å‚·B\n", sum, diff);

	return 0;
}