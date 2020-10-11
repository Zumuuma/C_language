#include <stdio.h>

int main(void)
{
	int i, n;

	printf("n‚Ì’lF");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%d‚Ì2æ‚Í%d\n", i, i * i);
	}

	return 0;
}