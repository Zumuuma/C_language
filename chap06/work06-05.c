//１からnまでの全整数の和を求めて返却する関数を作る

#include <stdio.h>

int sumup(int n)
{
	int tmp = 0;

	while (n > 0) //while (n-- > 0)はダメ。デクリメント後の値がnに入っておかしくなる。
	{
		tmp += n;
		n--;
	}

	return tmp;
}

int main(void)
{
	int a;

	puts("１から入力された値までの全整数の和を出力します。");
	printf("整数を入力してください：");
	scanf("%d", &a);

	printf("１から入力された値までの全整数の和は%dです。\n", sumup(a));
}