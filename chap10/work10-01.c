#include <stdio.h>

void adjust_point(int *n)
{
	if (*n < 0)
	{
		*n = 0;
	}
	else if (*n > 100)
	{
		*n = 100;
	}
}

int main(void)
{
	int num;

	printf("��������͂��Ă��������F");
	scanf("%d", &num);

	adjust_point(&num);

	printf("������̐�����%d�ł��B\n", num);

	return 0;
}