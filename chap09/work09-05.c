#include <stdio.h>

int str_char(const char s[], int c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			return i;
		}
	}
	return -1;
}

int main(void)
{
	int result;
	char str[128]; //ナル文字を含めて１２８文字まで格納できる。

	printf("文字列を入力してください：");
	scanf("%s", str);

	result = str_char(str, 'c');

	if (result == -1)
	{
		printf("文字cは含まれてないよ〜ん");
	}
	else
	{
		printf("文字cは配列strの%d番目に含まれてるよ〜ん", result);
	}

	return 0;
}