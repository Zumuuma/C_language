#include <stdio.h>

int factorial(int n)
{
	int kaijo = 1;

	for (int i = 1; i <= n; i++)
	{
		kaijo *= i;
	}

	return kaijo;
}

int main(void)
{
	int num;

	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &num);

	printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n", num, factorial(num));

	return 0;
}