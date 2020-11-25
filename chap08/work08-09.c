/*
標準入力に現れた行数をカウントするプログラムを作成せよ。
*/

#include <stdio.h>

int main(void)
{
	int str, cnt = 0;

	while (1)
	{
		str = getchar();
		if (str == EOF)
			break;
		if (str == '\n')
			cnt++;
	}

	printf("入力された行数は%dです。\n", cnt);

	return 0;
}