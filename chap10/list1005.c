//��̐����̘a�ƍ������߂�

#include <stdio.h>

//---n1��n2�̘a�ƍ���*sum��*diff�Ɋi�[---
void sum_diff(int n1, int n2, int *sum, int *diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int sum = 0, diff = 0;

	puts("��̐�������͂��Ă��������F");
	printf("����A�F");
	scanf("%d", &na);
	printf("����B�F");
	scanf("%d", &nb);

	sum_diff(na, nb, &sum, &diff);

	printf("�a��%d�ō���%d�ł��B\n", sum, diff);

	return 0;
}