//長方形の面積を求める

#include <stdio.h>

int main(void)
{
	int width;	//横幅
	int height; //高さ

	puts("長方形の面積を求めます。");

	printf("横幅:");
	scanf("%d", &width);

	printf("高さ:");
	scanf("%d", &height);

	printf("面積は%dです。\a\n", width * height);

	return 0;
}