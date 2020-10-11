#include <stdio.h>

int main(void)
{
	int a, b, c, min;

	puts("三つの整数を入力してください。");
	printf("整数1:");
	scanf("%d", &a); //9
	printf("整数2:");
	scanf("%d", &b); //8
	printf("整数3:");
	scanf("%d", &c); //7

	min = (a > b) ? b : a;
	min = (b > c) ? c : b;

	printf("最小値は%dです。\n", min);

	return 0;
}