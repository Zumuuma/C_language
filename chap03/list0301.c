//読み込んだ整数値が5で割り切れなければ、その旨を表示する。

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください:");
	scanf("%d", &no);

	if (no % 5)
	{
		puts("その数は5で割り切れません。");
	}
	return 0;
}