#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂��Ă�������:");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d ", no);
		no--;
	}

	return 0;
}