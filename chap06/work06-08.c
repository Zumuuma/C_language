#include <stdio.h>

int min_of(const int v[], int n)
{
	int min = v[0];
	for (int i = 0; i < n; i++)
	{
		if (v[i] < min)
		{
			min = v[i];
		}
	}
	return min;
}

int main(void)
{
	int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	printf("配列arrayの要素の最小値は%dです。\n", min_of(array, 10));

	return 0;
}