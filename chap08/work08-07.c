//�킩��Ȃ��ĎQ�l��v���O��������ɂ����B

#include <stdio.h>

//---�K��l��Ԃ�---
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

	printf("�قȂ�n�̐�������r�̐��������o���g�ݍ��킹�̐���nCr�����߂܂�\n");
	printf("�񕉐������F");
	scanf("%d", &n);
	printf("�񕉐������F");
	scanf("%d", &r);

	printf("�قȂ�%d�̐�������%d�̐��������o���g�ݍ��킹�̐���%d�ł�\n", n, r, combination(n, r));

	return 0;
}