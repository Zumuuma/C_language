#include <stdio.h>

int main(void)
{
	double a;
	float b;
	long double c;

	printf("double�^�̃T�C�Y��%d�ł��B\n", sizeof(a));
	printf("float�^�̃T�C�Y��%d�ł��B\n", sizeof(b));
	printf("long double�^�̃T�C�Y��%d�ł��B\n", sizeof(c));

	return 0;
}