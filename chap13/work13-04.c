#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	FILE *fp;
	int select;
	char name[100];
	double height, weight;

	if ((fp = fopen("info.dat", "w")) == NULL) //オープン
	{
		printf("\aファイルをオープンできません。\n");
	}
	else
	{
		while (true)
		{
			puts("名前、身長、体重を読み込んでファイルに書き込みます。");
			putchar('\n');
			printf("名前 身長 体重(半角スペースで区切る)：");
			scanf("%s %lf %lf", name, &height, &weight);

			fprintf(fp, "%-10s %5.1f %5.1f\n", name, height, weight);

			printf("入力を続けますか？　はい・・・１/いいえ・・・０：");
			scanf("%d", &select);
			if (select == 0)
			{
				break;
			}
			putchar('\n');
		}
		fclose(fp); //クローズ
	}

	return 0;
}