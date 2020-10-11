#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;
	int num;

	printf("n‚Ì’lF");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		sum += i;
	}

	printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", num, sum);

	return 0;
}