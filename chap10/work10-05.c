#include <stdio.h>

void ary_set(int v[], int n, int val)
{
	int i;

	for (i = 0; i < n; i++)
	{
		v[i] = val;
	}
}

int main(void)
{
	int i;
	int a[] = {1, 2, 3, 4, 5};

	ary_set(&a[2], 2, 99); //配列の2番目の要素の先頭アドレスが渡されるので、そこから２つ分だけ値が99に書き換えられる。つまり⇒ a[] = {1, 2, 99, 99, 5}　となる。（結果の検討）

	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}