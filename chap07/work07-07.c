#include <stdio.h>

int main(void)
{
	float a;
	double b;
	long double c;

	printf("float�^�̒l�F");
	scanf("%f", &a);
	printf("double�^�̒l�F");
	scanf("%lf", &b);
	printf("long double�^�̒l�F");
	scanf("%lf", &c);

	printf("float�^�̒l��%f�ł��B\n", a);
	printf("double�^�̒l��%lf�ł��B\n", b);
	printf("long double�^�̒l��%lf�ł��B\n", c);

	return 0;
}