#include <stdio.h>

int main(void)
{
	int a, b, c, min;

	puts("�O�̐�������͂��Ă��������B");
	printf("����1:");
	scanf("%d", &a); //9
	printf("����2:");
	scanf("%d", &b); //8
	printf("����3:");
	scanf("%d", &c); //7

	min = (a > b) ? b : a;
	min = (b > c) ? c : b;

	printf("�ŏ��l��%d�ł��B\n", min);

	return 0;
}