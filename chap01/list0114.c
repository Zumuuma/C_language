//�ǂݍ��񂾓�̐����l�̘a��ϐ��Ɋi�[���ĕ\��

#include <stdio.h>

int main(void)
{
	int n1, n2;
	int wa; //�a

	puts("��̐�������͂��Ă��������B");
	printf("�����P : ");
	scanf("%d", &n1);
	printf("�����Q ; ");
	scanf("%d", &n2);

	wa = n1 + n2;

	printf("�����̘a��%d�ł��B\n", wa);

	return 0;
}