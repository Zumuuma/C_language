#include <stdio.h>

int main(void)
{
	float x, y;

	puts("二つの整数を入力してください。");
	printf("整数x:");
	scanf("%f", &x);
	printf("整数y:");
	scanf("%f", &y);

	printf("xの値はyの%f%%です。\n", x / y * 100);

	return 0;
}