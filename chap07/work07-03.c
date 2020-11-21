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

unsigned rrotate(unsigned x, int n)
{
	int bits = (8 * sizeof(unsigned));

	return (n ? (x >> n) | (x << (bits - n)) : x);
	//�ǂ��o�����\��̃r�b�g����O�ɂ��炵��or���
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

	printf("��������͂��Ă��������F");
	scanf("%u", &x);
	printf("��]������r�b�g������͂��Ă��������F");
	scanf("%d", &n);

	printf("���̐�");
	printbits(x);
	putchar('\n');
	printf("�E��%d�r�b�g��]�������F", n);
	printbits(rrotate(x, n));
	putchar('\n');
	printf("����%d�r�b�g��]�������F", n);
	printbits(lrotate(x, n));
	putchar('\n');

	return 0;
}
