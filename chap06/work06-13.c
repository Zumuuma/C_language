#include <stdio.h>

void mat_add(const int a[2][4][3], int c[1][4][3])
{
	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 3; k++)
			{
				c[0][j][k] += a[i][j][k];
			}
		}
	}
}

void mat_print(const int m[2][4][3], int n)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", m[n][i][j]);
		}
		putchar('\n');
	}
}

int main(void)
{
	int score[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
	int sum[1][4][3] = {0};

	mat_add(score, sum);

	puts("‚P‰ñ–Ú‚Ì“_”");
	mat_print(score, 0);
	puts("‚Q‰ñ–Ú‚Ì“_”");
	mat_print(score, 1);
	puts("‡Œv“_");
	mat_print(sum, 0);

	return 0;
}