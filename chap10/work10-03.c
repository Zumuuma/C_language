#include <stdio.h>

void sort3(int *n1, int *n2, int *n3)
{
	int temp;

	if (*n1 > *n2)
	{
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}

	if (*n2 > *n3)
	{
		temp = *n2;
		*n2 = *n3;
		*n3 = temp;
	}

	if (*n1 > *n2)
	{
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
}

int main(void)
{
	int a, b, c;

	puts("�R�̐�������͂��Ă��������B");
	printf("�P�ځF");
	scanf("%d", &a);
	printf("�Q�ځF");
	scanf("%d", &b);
	printf("�R�ځF");
	scanf("%d", &c);

	sort3(&a, &b, &c);

	puts("�����Ƀ\�[�g��������\n");
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	return 0;
}