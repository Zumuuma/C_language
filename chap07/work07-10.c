#include <stdio.h>

int main(void)
{
	int i;
	float x;

	for (i = 0, x = 0.0; i <= 100; i++, x += 0.01)
	{
		printf("x = %f", x);
		printf("  x = %f\n", i / 100.0);
	}

	return 0;
}