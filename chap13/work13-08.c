#include <stdio.h>

int main(void)
{
	int ch;
	FILE *sfp;
	FILE *dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];

	printf("コピー元ファイル名：");
	scanf("%s", sname);
	printf("コピー先ファイル名：");
	scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
	{
		printf("コピー元ファイルをオープンできません。\n");
	}
	else
	{
		if ((dfp = fopen(dname, "w")) == NULL)
		{
			printf("コピー先ファイルをオープンできません。\n");
		}
		else
		{
			while ((ch = fgetc(sfp)) != EOF)
			{
				putchar(ch);
				fputc(ch, dfp);
			}
			putchar('\n');
			fclose(dfp);
		}
		fclose(sfp);
	}

	return 0;
}