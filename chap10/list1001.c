//��̐����̘a�ƍ������߂�i�ԈႦ�̃v���O�����j

#include <stdio.h>

//---n1��n2�̘a�ƍ���sum��diff�Ɋi�[�i�ԈႢ�j---
void sum_diff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;						  //�a
	diff = (n1 > n2) ? n1 - n2 : n2 - n1; //��
}

int main(void)
{
	int na, nb;
	int sum = 0, diff = 0;

	puts("��̐�������͂��Ă��������F");
	printf("����A:");
	scanf("%d", &na);
	printf("����B:");
	scanf("%d", &nb);

	sum_diff(na, nb, sum, diff);

	printf("�a��%d�ō���%d�ł��B\n", sum, diff);

	return 0;
}