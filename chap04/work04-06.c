#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���̐�������͂��Ă�������:");
	scanf("%d", &no);
	i = 2;
	while (i < no)
	{
		printf("%d ", i);
		i = i + 2;
	}
	printf("\n");

	return 0;
}