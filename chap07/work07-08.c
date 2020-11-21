#include <stdio.h>

int main(void)
{
	double a;
	float b;
	long double c;

	printf("double型のサイズは%dです。\n", sizeof(a));
	printf("float型のサイズは%dです。\n", sizeof(b));
	printf("long double型のサイズは%dです。\n", sizeof(c));

	return 0;
}