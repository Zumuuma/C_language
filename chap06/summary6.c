//２次元配列aの全構成要素の合計を返す
int sum_ary2D(const int a[][3], int n)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}