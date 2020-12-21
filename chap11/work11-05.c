#include <stdio.h>

int str_chnum(const char *s, int c)
{
	int count = 0;

	while (*s) //記憶域を節約する裏ワザ
	{
		if (*s == 'c')
		{
			count++;
		}
		*s++;
	}
	return count;
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	printf("cの個数は%d個です。\n", str_chnum(str, 'c'));

	return 0;
}