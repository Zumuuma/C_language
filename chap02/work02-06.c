#include <stdio.h>

int main(void)
{
	int length;

	printf("�g������͂��Ă�������:");
	scanf("%d", &length);
	printf("�W���̏d��%.1f�ł��B", (length - 100) * 0.9);

	return 0;
}