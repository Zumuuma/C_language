//配列bの先頭n個の要素をaにコピー
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}