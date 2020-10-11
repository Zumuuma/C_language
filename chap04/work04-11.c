//読み込んだ正の整数値を逆順に表示

#include <stdio.h>

int main(void)
{
	int no;

	do
	{
		printf("正の整数を入力してください：");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("正でない数を入力しないでください。");
		}
	} while (no <= 0);

	//noは0より大きくなっている

	printf("%dを逆から読むと", no);
	while (no > 0)
	{
		printf("%d", no % 10); //最下位の桁を表示
		no /= 10;			   //右に1桁ずらす
	}
	puts("です。");

	return 0;
}