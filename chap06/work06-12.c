//おそらく不完全なプログラム。編集できる人協力お願いします！
//問題：４行３列の行列aと３行４列の行列bの積を、４行４列の行列cに格納する関数を作成せよ。

#include <stdio.h>

int array1[4][3], array2[3][4], sum[4][4] = {0};

//4行3列の行列aを入力
void input_array1()
{

	int i;

	printf("４行３列の行列を入力して下さい。（数字と数字の間は半角スペース）\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%d %d %d", &array1[i][0], &array1[i][1], &array1[i][2]);
	}
}

//3行4列の行列bを入力
void input_array2()
{

	int i;

	printf("３行４列の行列を入力して下さい。（数字と数字の間は半角スペース）\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &array2[i][0], &array2[i][1], &array2[i][2], &array2[i][3]);
	}
}

//b*aをcに代入
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{

	int i, j, k;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 3; k++)
			{
				c[i][j] = c[i][j] + a[j][k] * b[k][j];
			}
		}
	}
}

//cを出力
void mat_print(const int c[4][4])
{

	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	printf("４行３列の行列と３行４列の行列の積を求めます。\n");
	input_array1();
	input_array2();
	printf("４行３列の行列と３行４列の行列の積は\n");
	mat_mul(array1, array2, sum);
	mat_print(sum);

	return 0;
}