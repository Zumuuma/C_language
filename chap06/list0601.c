//�Q�̐����̑傫�����̒l�����߂�

#include <stdio.h>

//--- �傫�����̒l��Ԃ� ---
int max2(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(void)
{
	int n1, n2;

	puts("�Q�̐�������͂��Ă��������B");
	printf("�����P�F");
	scanf("%d", &n1);
	printf("�����Q�F");
	scanf("%d", &n2);

	printf("�傫�����̒l��%d�ł��B\n", max2(n1, n2));

	return 0;
}