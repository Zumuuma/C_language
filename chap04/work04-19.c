#include <stdio.h>

int main(void)
{
	int i, n;
	int cnt = 0;

	printf("®”’lF");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d \n", i);
			cnt++;
		}
	}
	printf("–ñ”‚Í%dŒÂ‚Å‚·B", cnt);

	putchar('\n');

	return 0;
}