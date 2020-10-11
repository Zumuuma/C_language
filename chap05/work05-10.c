#include <stdio.h>

int main(void)
{
	int i, j, k;
	int sum = 0;
	int array1[4][3]; //４行３列の行列の二次元配列
	int array2[3][4]; //３行４列の行列の二次元配列

	printf("４行３列の行列と３行４列の行列の積を求めます。\n");

	for (i = 0; i < 4; i++) //４行３列の行列の処理
	{
		for (j = 0; j < 3; j++)
		{
			printf("４行３列の行列を入力してください。\n");
			scanf("%d", &array1[i][j]);
		}
	}

	for (i = 0; i < 3; i++) //３行４列の行列の処理
	{
		for (j = 0; j < 4; j++)
		{
			printf("３行４列の行列を入力してください。\n");
			scanf("%d", &array2[i][j]);
		}
	}

	printf("４行３列の行列と３行４列の行列の積は\n");

	for (k = 0; k < 4; k++) //「３」最後に一番外側のforの処理。forの処理は内側から外側に向かって行われる。
	{
		for (i = 0; i < 4; i++) //「２」次にここのforの処理が終わってから一番外側のforの処理。
		{
			for (j = 0; j < 3; j++) //「１」内側のforの処理が終わってから１つ外側のforの処理。
			{
				sum = sum + (array1[k][j] * array2[j][i]);
			}
			printf("%3d ", sum);
			sum = 0;
		}
		putchar('\n');
	}

	return 0;
}