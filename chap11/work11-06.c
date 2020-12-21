#include <stdio.h>

char *str_chr(const char *s, int c)
{
	char *address = NULL;

	while (*s)
	{
		if (*s == 'c')
		{
			address = s; //コンパイル時、'='：異なる 'const' 修飾子です。と警告される。(原因不明)
			break;
		}
		*s++;
	}
	return address;
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	printf("最も先頭側の文字'c'のアドレスは%pです。(０なら'c'はなし)\n", str_chr(str, 'c'));

	return 0;
}