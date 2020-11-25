//わからなくて参考例プログラムを基にした。

#include <stdio.h>

//---階乗値を返す---
int factorial(int n)
{
	if (n > 0)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}

int combination(int n, int r)
{
	if (n > r)
	{
		return factorial(n) / (factorial(n - r) * factorial(r));
	}
	else if (n == r)
	{
		return 1;
	}
	else
	{
		return NULL;
	}
}

int main(void)
{

	int n, r;

	printf("異なるn個の整数からr個の整数を取り出す組み合わせの数のnCrを求めます\n");
	printf("非負整数ｎ：");
	scanf("%d", &n);
	printf("非負整数ｒ：");
	scanf("%d", &r);

	printf("異なる%d個の整数から%d個の整数を取り出す組み合わせの数は%d個です\n", n, r, combination(n, r));

	return 0;
}