#include <stdio.h>

int main(void)
{
	int num;
	int i;

	printf("���̐�������͂��Ă��������F");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d", i % 10);
	}
	putchar('\n');
	return 0;
}