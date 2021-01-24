//標準読み取りからの入力をファイルに書き込む

#include <stdio.h>

int main(void)
{
	int ch;
	FILE *fp;				  //コピー先ファイル
	char fname[FILENAME_MAX]; //コピー先ファイル名

	printf("コピー先ファイル名：");
	scanf("%s\n", fname); //　\←は改行文字を空読みする。

	if ((fp = fopen(fname, "w")) == NULL)
	{
		printf("\aコピー先ファイルをオープンできません。\n");
	}
	else
	{
		while ((ch = fgetc(stdin)) != EOF)
		{
			fputc(ch, fp);
		}
		fclose(fp); //コピー先をクローズ
	}

	return 0;
}