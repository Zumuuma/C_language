#include <stdio.h>

int main(void)
{
	int i, n;

	printf("������\�����܂����F");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("��");
		if (i % 5 == 0)
		{
			putchar('\n');
		}
	}

	return 0;
}