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

	printf("��������͂��ĉ������F");
	scanf("%u", &x);
	printf("���r�b�g�ڂ�ύX���܂����H�F");
	scanf("%d", &pos);
	printf("�������牽�r�b�g�ύX���܂����H�F");
	scanf("%d", &n);

	printf("���̐��F");
	printbits(x);
	putchar('\n');
	printf("%d�r�b�g��~%d�r�b�g�ڂ�1�ɂ�����", pos, pos + n - 1);
	printbits(set_n(x, pos, n));
	putchar('\n');
	printf("%d�r�b�g��~%d�r�b�g�ڂ�0�ɂ�����", pos, pos + n - 1);
	printbits(reset_n(x, pos, n));
	putchar('\n');
	printf("%d�r�b�g��~%d�r�b�g�ڂ𔽓]������", pos, pos + n - 1);
	printbits(inverse_n(x, pos, n));
	putchar('\n');

	return 0;
}