#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;
	int num;

	printf("n�̒l�F");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		sum += i;
	}

	printf("1����%d�܂ł̘a��%d�ł��B\n", num, sum);

	return 0;
}