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
			if (ch == '\n')
			{
				count++;
			}
		}
	}

	printf("そのファイル中の行数（改行回数）は%d回です。\n", count);

	return 0;
}