#include <stdio.h>

void put_stringr(const char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		//文字列の合計ここで求めて変数iに記憶しておく。
	}
	for (i = i - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	put_stringr(str);

	return 0;
}