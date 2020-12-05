#include <stdio.h>

void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);
	printf("配列strに入力された文字列は\"%s\"です。\n", str);
	puts("配列strを初期化します。どんな気持ちいぃぃぃぃぃぃぃぃぃいぃぃぃぃぃぃぃぃ？？？？？？？？？？？？");

	null_string(str);

	printf("はい、配列strは初期化されちゃいましたぁぁぁｗｗｗｗ\"%s\"←ほらねｗｗｗ消えたでしょ？ざまぁｗｗｗ", str);

	return 0;
}