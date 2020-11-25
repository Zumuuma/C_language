//わからなくて参考例プログラムを基にした。

#include <stdio.h>

int gcd(int x, int y)
{

	if (x < y)
	{
		x ^= y ^= x ^= y;
	}

	return !(x % y) ? y : gcd(y, x % y);
}

int main()
{

	int x, y, n;

	printf("一つ目の整数を入力してください : ");
	scanf("%d", &x);
	printf("二つ目の整数を入力してください : ");
	scanf("%d", &y);

	n = gcd(x, y);

	printf(" %d と %d の最大公約数は %d です．", x, y, n);

	return 0;
}