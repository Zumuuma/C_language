//�킩��Ȃ��ĎQ�l��v���O��������ɂ����B

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

	printf("��ڂ̐�������͂��Ă������� : ");
	scanf("%d", &x);
	printf("��ڂ̐�������͂��Ă������� : ");
	scanf("%d", &y);

	n = gcd(x, y);

	printf(" %d �� %d �̍ő���񐔂� %d �ł��D", x, y, n);

	return 0;
}