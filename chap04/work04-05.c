#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���̐�������͂��Ă�������:");
	scanf("%d", &no);

	i = 1;
	if (no >= 1)
	{
		while (i <= no)
		{
			printf("%d ", i++); //i�̒l��\��������ɃC���N�������g
		}
		printf("\n"); //���s
	}

	return 0;
}