#include <stdio.h>

int main(void)
{
	float x, y;

	puts("��̐�������͂��Ă��������B");
	printf("����x:");
	scanf("%f", &x);
	printf("����y:");
	scanf("%f", &y);

	printf("x�̒l��y��%.0f%%�ł��B\n", x / y * 100);

	return 0;
}