#include <stdio.h>

int main(void)
{
	int i;
	float x;
	float sum_decimal = 0, sum_integer = 0;

	for (i = 0, x = 0.0; i <= 100; i++, x += 0.01)
	{
		sum_decimal += x;
		sum_integer += (i / 100.0);
	}

	printf("­”§Œä‚Ì—İŒv‚Í%f‚Å®”§Œä‚Ì—İŒv‚Í%f‚Å‚·B", sum_decimal, sum_integer);

	return 0;
}