#include <stdio.h>

int main(void)
{
	int i, n;

	printf("n�̒l�F");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%d��2���%d\n", i, i * i);
	}

	return 0;
}