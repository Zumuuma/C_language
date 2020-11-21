//参考プログラム(自主製作ではない)

#include <stdio.h>

void printbits(unsigned x)
{
	int i;

	for (i = (8 * sizeof(unsigned)) - 1; i >= 0; i--)
	{
		if ((x >> i) & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}

unsigned rrotate(unsigned x, int n)
{
	int bits = (8 * sizeof(unsigned));

	return (n ? (x >> n) | (x << (bits - n)) : x);
	//追い出される予定のビットを手前にずらしてor取る
}

unsigned lrotate(unsigned x, int n)
{
	int bits = (8 * sizeof(unsigned));

	return (n ? (x << n) | (x >> (bits - n)) : x);
}

int main()
{
	unsigned x;
	int n;

	printf("整数を入力してください：");
	scanf("%u", &x);
	printf("回転させるビット数を入力してください：");
	scanf("%d", &n);

	printf("元の数");
	printbits(x);
	putchar('\n');
	printf("右に%dビット回転した数：", n);
	printbits(rrotate(x, n));
	putchar('\n');
	printf("左に%dビット回転した数：", n);
	printbits(lrotate(x, n));
	putchar('\n');

	return 0;
}
