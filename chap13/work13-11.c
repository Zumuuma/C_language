#include <stdio.h>

int main(void)
{
	FILE *fp;
	double Array[10] = {10.5, 11.5, 12.5, 13.5, 14.5, 15.5, 16.5, 17.5, 19.5, 20.5};

	puts("配列Arrayから取り出した要素の値は");
	for (int i = 0; i < 10; i++)
	{
		printf("%lf ", Array[i]);
	}
	puts("です。");

	//書き込み
	if ((fp = fopen("Array.bin", "wb")) == NULL) //オープン
	{
		printf("\aファイルをオープンできません。\n");
	}
	else
	{
		fwrite(Array, sizeof(double), 10, fp); //書き込み
		fclose(fp);							   //クローズ
	}

	//読み取り
	if ((fp = fopen("Array.bin", "rb")) == NULL) //オープン
	{
		printf("ファイルをオープンできません。\n");
	}
	else
	{
		fread(Array, sizeof(double), 10, fp); //読み取り
		puts("ファイルから取り出した要素の値は");
		for (int i = 0; i < 10; i++)
		{
			printf("%lf ", Array[i]);
		}
		puts("です。");
		fclose(fp); //クローズ
	}

	return 0;
}