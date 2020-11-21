//�Q�l�v���O����(���吻��ł͂Ȃ�)

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

	printf("��������͂��ĉ������F");
	scanf("%u", &x);
	printf("���r�b�g�ڂ�ύX���܂����H�F");
	scanf("%d", &n);

	printf("���̐��F");
	printbits(x);
	putchar('\n');
	printf("%d�r�b�g�ڂ�1�ɂ�����", n);
	printbits(set(x, n));
	putchar('\n');
	printf("%d�r�b�g�ڂ�0�ɂ�����", n);
	printbits(reset(x, n));
	putchar('\n');
	printf("%d�r�b�g�ڂ𔽓]������", n);
	printbits(inverse(x, n));
	putchar('\n');

	return 0;
}