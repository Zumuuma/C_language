#include <stdio.h>

int main(void)
{
	float a;
	double b;
	long double c;

	printf("float型の値：");
	scanf("%f", &a);
	printf("double型の値：");
	scanf("%lf", &b);
	printf("long double型の値：");
	scanf("%lf", &c);

	printf("float型の値は%fです。\n", a);
	printf("double型の値は%lfです。\n", b);
	printf("long double型の値は%lfです。\n", c);

	return 0;
}