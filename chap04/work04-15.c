#include <stdio.h>

int main(void)
{
	int i;
	int min;
	int max;
	int scale;
	double weight;

	printf("��cm����F");
	scanf("%d", &min);
	printf("��cm�܂ŁF");
	scanf("%d", &max);
	printf("��cm����:");
	scanf("%d", &scale);

	for (i = min; i <= max; i += scale)
	{
		weight = (i - 100) * 0.9;
		printf("%dcm %.2fkg\n", i, weight);
	}

	return 0;
}