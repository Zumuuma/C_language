//�S��l��Ԃ��֐������

#include <stdio.h>

//--- x��2��l��Ԃ� ---
int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int a;

	puts("���͂��ꂽ�����l�̂S��̒l���o�͂��܂��B");
	printf("��������͂��Ă��������F");
	scanf("%d", &a);

	printf("���͂��ꂽ�l�̂S��̒l��%d�ł��B\n", pow4(a));

	return 0;
}