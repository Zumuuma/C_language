//�R��l��Ԃ��֐������

#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int a;

	puts("���͂��ꂽ�����l�̂R��̒l���o�͂��܂��B");
	printf("��������͂��Ă��������F");
	scanf("%d", &a);

	printf("���͂��ꂽ�����l�̂R���%d�ł��B\n", cube(a));
}