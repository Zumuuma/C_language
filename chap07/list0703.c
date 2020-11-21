//文字型と整数型の大きさを表示する

#include <stdio.h>

int main(void)
{
	printf("sizeof(char)　＝　%u\n", (unsigned)sizeof(char));
	printf("sizeof(short)　＝　%u\n", (unsigned)sizeof(short));
	printf("sizeof(int)　＝　%u\n", (unsigned)sizeof(int));
	printf("sizeof(long)　＝　%u\n", (unsigned)sizeof(long));

	return 0;
}