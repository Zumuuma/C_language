#include <stdio.h>

void put_string(const char *s)
{
	while (*s)//記憶域を節約する裏ワザ
	{
		printf("%c", *s);
		*s++;
	}
	putchar('\n');
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	put_string(str);

	return 0;
}