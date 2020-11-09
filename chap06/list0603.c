//２つの整数の２乗値の差を求める

#include <stdio.h>

//--- xの2乗値を返す ---
int sqr(int x)
{
	return x * x;
}

//--- xとyの差を返す ---
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a; //大きい方から小さい方を引く
}

int main(void)
{
	int x, y;

	puts("2つの整数を入力してください。");
	printf("整数x：");
	scanf("%d", &x);
	printf("整数y：");
	scanf("%d", &y);

	printf("xの2乗とyの2乗の差は%dです。\n", diff(sqr(x), sqr(y)));

	return 0;
}