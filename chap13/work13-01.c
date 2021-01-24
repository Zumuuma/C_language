#include <stdio.h>

int main(void)
{
	FILE *fp;
	char input[128];

	printf("ファイル名を入力してください：");
	scanf("%s", input);

	fp = fopen(input, "r"); //ファイルのオープン

	if (fp == NULL)
	{
		printf("\aファイル\"%s\"をオープンできませんでした。\n", input);
	}
	else
	{
		printf("\aファイル\"%s\"をオープンしました。\n", input);
		fclose(fp); //ファイルのクローズ
	}

	return 0;
}