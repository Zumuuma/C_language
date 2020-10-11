#include <stdio.h>

int main(void)
{
	int i;
	int min;
	int max;
	int scale;
	double weight;

	printf("âΩcmÇ©ÇÁÅF");
	scanf("%d", &min);
	printf("âΩcmÇ‹Ç≈ÅF");
	scanf("%d", &max);
	printf("âΩcmÇ≤Ç∆:");
	scanf("%d", &scale);

	for (i = min; i <= max; i += scale)
	{
		weight = (i - 100) * 0.9;
		printf("%dcm %.2fkg\n", i, weight);
	}

	return 0;
}