#include <stdio.h>

int main(void)
{
	int a, b, ans;

	puts("��̐�������͂��Ă��������B");
	printf("����A:");
	scanf("%d", &a);
	printf("����B:");
	scanf("%d", &b);

	ans = (a > b) ? a - b : b - a;

	if (ans <= 10 || ans <= -10)
	{
		puts("�����̍���10�ȉ��ł��B");
	}
	else
	{
		puts("�����̍���11�ȏ�ł��B");
	}

	return 0;
}