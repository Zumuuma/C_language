#include <stdio.h>

int main(void)
{
	int i, n;

	printf("�����l�F");
	scanf("%d", &n);

	for (i = 1; i <= n; i += 2)
	{
		printf("%d ", i);
	}

	putchar('\n');

	return 0;
}