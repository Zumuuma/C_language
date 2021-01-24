//前回のプログラム実行時の日付と時刻を表示する

#include <time.h>
#include <stdio.h>

char data_file[] = "datatime.bin"; //ファイル名

//---前回の日付・時刻を取得・表示---
void get_data(void)
{
	FILE *fp;
	time_t current = time(NULL);
	struct tm *fetch_TM = localtime(&current);

	if ((fp = fopen(data_file, "rb")) == NULL) //オープン
	{
		printf("本プログラムを実行するのは初めてですね。\n");
	}
	else
	{
		int year, month, day, h, m, s;

		fread(fetch_TM, sizeof(struct tm), 1, fp);
		printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n", fetch_TM->tm_year + 1900, fetch_TM->tm_mon + 1, fetch_TM->tm_mday, fetch_TM->tm_hour, fetch_TM->tm_min, fetch_TM->tm_sec);
		fclose(fp); //クローズ
	}
}

//---今回の日付・時刻を書き込む---
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);			//現在の暦時刻
	struct tm *timer = localtime(&current); //要素別の時刻（地方時）

	if ((fp = fopen(data_file, "wb")) == NULL) //オープン
	{
		printf("\aファイルをオープンできません。\n");
	}
	else
	{
		fwrite(timer, sizeof(struct tm), 1, fp);
		fclose(fp); //クローズ
	}
}

int main(void)
{
	get_data();

	put_data();

	return 0;
}