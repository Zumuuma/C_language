#include <stdio.h>
#include <math.h>

int main(void)
{
	double square;

	printf("正方形の面積を入力してください：");
	scanf("%lf", &square);

	printf("正方形の１辺の長さは%.2lfです。", sqrt(square));

	return 0;
}