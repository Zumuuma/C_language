//‘æ“ñÍ‚Ì‚Ü‚Æ‚ß

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	double r; //”¼Œa

	printf("®”a‚Æb‚Ì’l:");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);

	printf("(a+b)/2 = %d\n", (a + b) / 2);

	printf("•½‹Ï’l=%f\n\n", (double)(a + b) / 2);

	printf("”¼Œa:");
	scanf("%lf", &r);

	printf("”¼Œa%.3f‚Ì‰~‚Ì–ÊÏ‚Í%.3f‚Å‚·B\n", r, 3.14 * r * r);

	return 0;
}