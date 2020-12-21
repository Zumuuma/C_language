//文字制限の制御がうまく動作しない。strncpu()やstrncat()やstrncmp()など。

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	char str1[128];
	char tmp[128];
	size_t limit = 0;

	printf("文字列の長さを求めます。文字列を入力してください：");
	scanf("%s", str);
	printf("文字列の長さは%dです。\n\n", strlen(str));

	printf("テキトーに文字列を入力してください：");
	scanf("%s", str);
	printf("さっきのところにコピーしたい文字列を長めに入力してください：");
	scanf("%s", tmp);
	printf("コピーされた結果は%sです。\n", strcpy(str, tmp));
	printf("さっきのところにコピーしたい文字列は何文字まででチュか？：");
	scanf("%d", &limit);
	printf("コピーされた結果は%sです。\n\n", strncpy(str, tmp, limit));

	printf("文字列を連結します。前半の文字列を入力してください：");
	scanf("%s", str);
	printf("文字列を連結します。もう一度、前半の文字列を入力してください：");
	scanf("%s", str1);
	printf("連結する後半の文字列を入力してください：");
	scanf("%s", tmp);
	printf("文字列を連結した結果は%sです。\n", strcat(str, tmp));
	printf("連結する後半の文字列は何文字まででチュか？");
	scanf("%d", &limit);
	printf("文字列を連結した結果は%sです。\n\n", strncat(str, tmp, limit));

	printf("文字列の大小関係を求めます。文字列(1)を入力してください：");
	scanf("%s", str);
	printf("比較する文字列(2)を入力してください：");
	scanf("%s", tmp);
	printf("文字列の大小関係の結果は%dです。(等しければ0,(1)>(2)なら正の整数値,(1)<(2)なら負の整数)\n", strcmp(str, tmp));
	printf("比較する文字列は何文字まででチュか？");
	scanf("%d", &limit);
	printf("文字列の大小関係の結果は%dです。(等しければ0,(1)>(2)なら正の整数値,(1)<(2)なら負の整数\n\n", strncmp(str, tmp, limit));

	return 0;
}