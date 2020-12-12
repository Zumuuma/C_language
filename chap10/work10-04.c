#include <stdio.h>

#define NUMBER 11

void set_idx(int *v, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		v[i] = i;
	}
}

int main(void)
{
	int i;
	int array[NUMBER] = {0};

	set_idx(array, NUMBER);

	for (i = 0; i < NUMBER; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}