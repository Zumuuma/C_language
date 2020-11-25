#include <stdio.h>

#define diff(x, y) ((x) - (y))

int main(void)
{
	double x, y;

	printf("二つの値x(大)とy(小)の差を求めます。\n");
	printf("値x：");
	scanf("%lf", &x);
	printf("値y：");
	scanf("%lf", &y);
	printf("二つの値xとyの差は%fです。\n", diff(x, y));

	return 0;
}