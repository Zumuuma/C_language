#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int ch, con_ch;
	FILE *sfp;
	FILE *dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];

	printf("�R�s�[���t�@�C�����F");
	scanf("%s", sname);
	printf("�R�s�[��t�@�C�����F");
	scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
	{
		printf("�R�s�[���t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		if ((dfp = fopen(dname, "w")) == NULL)
		{
			printf("�R�s�[��t�@�C�����I�[�v���ł��܂���B\n");
		}
		else
		{
			while ((ch = fgetc(sfp)) != EOF)
			{
				con_ch = toupper(ch);
				fputc(con_ch, dfp);
			}
			putchar('\n');
			fclose(dfp);
		}
		fclose(sfp);
	}

	return 0;
}