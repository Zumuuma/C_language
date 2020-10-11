#include <stdio.h>

#define NUMBER 7 //入力を受け付ける個数

int main(void)
{
	int i;
	int x[NUMBER]; //入力の個数によって変動

	for (i = 0; i < NUMBER; i++) //要素に値を読み込む
	{
		printf("x[%d]　＝　", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < NUMBER / 2; i++) //要素の並びを反転
	{
		int temp = x[i];		  //最初の値をtempに一時保管
		x[i] = x[NUMBER - 1 - i]; //入力よりも１つ小さいから１引かなきゃいけない
		x[NUMBER - 1 - i] = temp; //移転先が空いたので一時保管していたモノを戻して反転完了
	}

	puts("反転しました。");
	for (i = 0; i < NUMBER; i++) //要素の値を表示
	{
		printf("x[%d]　＝　%d\n", i, x[i]);
	}

	return 0;
}