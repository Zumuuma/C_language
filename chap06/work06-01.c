//２つの整数のうち、小さい方の値を返す。

#include <stdio.h>

int min2(int a, int b)
{
	int min = a;

	if (b < min)
	{
		min = b;
	}

	return min;
}

int main(void)
{
	int a, b;

	puts("２つの整数を入力してください。");
	printf("整数１：");
	scanf("%d", &a);
	printf("整数２：");
	scanf("%d", &b);

	printf("小さい方の値は%dです。\n", min2(a, b));

	return 0;
}