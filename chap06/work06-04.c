//４乗値を返す関数を作る

#include <stdio.h>

//--- xの2乗値を返す ---
int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int a;

	puts("入力された整数値の４乗の値を出力します。");
	printf("整数を入力してください：");
	scanf("%d", &a);

	printf("入力された値の４乗の値は%dです。\n", pow4(a));

	return 0;
}