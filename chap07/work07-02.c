//参考プログラム(自主製作ではない)

#include <stdio.h>

int main(void)
{
	int start, judge, shift;

	printf("数を入力してください。：");
	scanf("%d", &start);

	do
	{
		printf("右にビットシフト：１ OR 左にビットシフト：２ OR 終わる：３\n");
		scanf("%d", &judge);

		if (judge == 1)
		{
			printf("何ビット右にシフトしますか？：");
			scanf("%d", &shift);
			printf("右に%dビットシフトすると値は %d です。\n", shift, start >> shift);
		}
		else if (judge == 2)
		{
			printf("何ビット左にシフトしますか？：");
			scanf("%d", &shift);
			printf("左に%dビットシフトすると値は %d です。\n", shift, start << shift);
		}
		else
		{
			break;
		}
	} while (1);

	return 0;
}