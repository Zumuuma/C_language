//配列の要素にアタイヲ読み込んで表示

#include <stdio.h>

int main(void)
{
	int i;
	int x[5];

	for (i = 0; i < 5; i++) //要素に値を読み込む
	{
		printf("x[%d]　：　", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("x[%d]　＝　%d\n", i, x[i]);
	}

	return 0;
}