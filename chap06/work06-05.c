//�P����n�܂ł̑S�����̘a�����߂ĕԋp����֐������

#include <stdio.h>

int sumup(int n)
{
	int tmp = 0;

	while (n > 0) //while (n-- > 0)�̓_���B�f�N�������g��̒l��n�ɓ����Ă��������Ȃ�B
	{
		tmp += n;
		n--;
	}

	return tmp;
}

int main(void)
{
	int a;

	puts("�P������͂��ꂽ�l�܂ł̑S�����̘a���o�͂��܂��B");
	printf("��������͂��Ă��������F");
	scanf("%d", &a);

	printf("�P������͂��ꂽ�l�܂ł̑S�����̘a��%d�ł��B\n", sumup(a));
}