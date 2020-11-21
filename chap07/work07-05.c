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

unsigned set_n(unsigned x, int pos, int n)
{

	for (int i = pos; i <= pos + n - 1; i++)
	{
		x = (x | lrotate(1U, i));
	}
	return x;
}

unsigned reset_n(unsigned x, int pos, int n)
{

	for (int i = pos; i <= pos + n - 1; i++)
	{
		x = (x & ~lrotate(1U, i));
	}
	return x;
}

unsigned inverse_n(unsigned x, int pos, int n)
{

	for (int i = pos; i <= pos + n - 1; i++)
	{
		x = (x ^ lrotate(1U, i));
	}
	return x;
}

int main()
{

	unsigned x;
	int pos, n;

	printf("整数を入力して下さい：");
	scanf("%u", &x);
	printf("何ビット目を変更しますか？：");
	scanf("%d", &pos);
	printf("そこから何ビット変更しますか？：");
	scanf("%d", &n);

	printf("元の数：");
	printbits(x);
	putchar('\n');
	printf("%dビット目~%dビット目を1にした数", pos, pos + n - 1);
	printbits(set_n(x, pos, n));
	putchar('\n');
	printf("%dビット目~%dビット目を0にした数", pos, pos + n - 1);
	printbits(reset_n(x, pos, n));
	putchar('\n');
	printf("%dビット目~%dビット目を反転した数", pos, pos + n - 1);
	printbits(inverse_n(x, pos, n));
	putchar('\n');

	return 0;
}