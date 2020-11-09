#include <stdio.h>

int main(void)
{
	static double array[10];

	for (int i = 0; i < 10; i++)
	{
		printf("array[%d]@@%f\n", i, array[i]);
	}

	return 0;
}