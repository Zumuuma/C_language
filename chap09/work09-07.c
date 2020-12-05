#include <stdio.h>

void put_stringn(const char s[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%s", s);
	}
}

int main(void)
{
	char str[128];
	int num;

	printf("文字列を入力してください：");
	scanf("%s", str);
	printf("連続して表示する回数を入力してください：");
	scanf("%d", &num);

	put_stringn(str, num);

	return 0;
}