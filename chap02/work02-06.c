#include <stdio.h>

int main(void)
{
	int length;

	printf("身長を入力してください:");
	scanf("%d", &length);
	printf("標準体重は%.1fです。", (length - 100) * 0.9);

	return 0;
}