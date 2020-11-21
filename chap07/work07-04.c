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

unsigned lrotate(unsigned x, int n)
{

	int bits = (8 * sizeof(unsigned));

	return (n ? (x << n) | (x >> (bits - n)) : x);
}

unsigned set(unsigned x, int pos)
{

	return (x | lrotate(1U, pos));
}

unsigned reset(unsigned x, int pos)
{

	return (x & ~lrotate(1U, pos));
}

unsigned inverse(unsigned x, int pos)
{

	return (x ^ lrotate(1U, pos));
}

int main()
{

	unsigned x;
	int n;

	printf("整数を入力して下さい：");
	scanf("%u", &x);
	printf("何ビット目を変更しますか？：");
	scanf("%d", &n);

	printf("元の数：");
	printbits(x);
	putchar('\n');
	printf("%dビット目を1にした数", n);
	printbits(set(x, n));
	putchar('\n');
	printf("%dビット目を0にした数", n);
	printbits(reset(x, n));
	putchar('\n');
	printf("%dビット目を反転した数", n);
	printbits(inverse(x, n));
	putchar('\n');

	return 0;
}