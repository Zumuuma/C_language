//３乗値を返す関数を作る

#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int a;

	puts("入力された整数値の３乗の値を出力します。");
	printf("整数を入力してください：");
	scanf("%d", &a);

	printf("入力された整数値の３乗は%dです。\n", cube(a));
}