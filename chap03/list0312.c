//�ǂݍ��񂾓�̐����l�̑傫���ق��̒l��\��(���̂Q)

#include <stdio.h>

int main(void)
{
	int n1, n2, max;

	puts("��̐�������͂��Ă��������B");
	printf("����1:");
	scanf("%d", &n1);
	printf("����2:");
	scanf("%d", &n2);

	if (n1 > n2)
	{
		max = n1;
	}
	else
	{
		max = n2;
	}

	printf("�傫���ق��̒l��%d�ł��B\n",max);

	return 0;
}