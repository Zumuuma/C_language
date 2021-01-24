#include <stdio.h>

int main(void)
{
	FILE *fp;
	char input[128];

	printf("ファイル名を入力してください：");
	scanf("%s", input);

	fp = fopen(input, "w"); //ファイルのオープン

	printf("\aファイル\"%s\"の中身をすべて消去しました。\n", input);

	fclose(fp); //ファイルのクローズ

	return 0;
}