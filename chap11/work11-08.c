#include <stdio.h>
#include <ctype.h>
#include <string.h>

void del_digit(char *str)
{

	int i, j;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isalpha(*(str + i)))
		{
			for (j = i; j < strlen(str); j++) //この辺よくわからない…
			{
				*(str + j) = *(str + j + 1);
			}
			i--;
		}
	}
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	del_digit(str);

	printf("入力した文字列から数字文字を削除すると%sです。\n", str);
}