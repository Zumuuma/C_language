#include <stdio.h>

int main(void)
{
	int i, j, input;

	puts("�����������s���~�b�h�����܂��B");
	printf("���i�ł����F");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		for (j = 1; j < i; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * (input - i) + 1; j++)
		{
			printf("%d", i % 10);
		}
		puts("");
	}

	return 0;
}