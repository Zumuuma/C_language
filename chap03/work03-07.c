#include <stdio.h>

int main(void)
{
	int a, b, c, d, max;

	puts("四つの整数を入力してください。");
	printf("整数1:");
	scanf("%d", &a); //5
	printf("整数2:");
	scanf("%d", &b); //6
	printf("整数3:");
	scanf("%d", &c); //7
	printf("整数4:");
	scanf("%d", &d); //8

	max = a;

	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}

	printf("最大値は%dです。\n", max);

	return 0;
}