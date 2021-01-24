#include <stdio.h>

int main(void)
{
	int ch, count = 0;
	FILE *fp;
	char fname[FILENAME_MAX]; //ファイル名

	printf("ファイル名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("\aファイルをオープンできません。\n");
	}
	else
	{
		while ((ch = fgetc(fp)) != EOF)
		{
			if ('0' <= ch && ch <= '9')
			{
				count++;
			}
		}
	}

	printf("そのファイルの中の数字文字の個数は%d個です。\n", count);

	return 0;
}