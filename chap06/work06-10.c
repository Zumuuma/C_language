#include <stdio.h>

void rev_intary(int v[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int temp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = temp;
	}
}

void intary_rcpy(int v1[], const int v2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		v1[i] = v2[i];
	}
	rev_intary(v1, n);
}

int main(void)
{
	int v1[10];
	int v2[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

	intary_rcpy(v1, v2, 10);

	printf("”z—ñv2‚Ì•À‚Ñ‚ð”½“]‚µ‚½‚à‚Ì‚ð”z—ñv1‚ÉŠi”[‚µ‚½Œ‹‰Ê‚Í");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", v1[i]);
	}
	printf("‚Å‚·B");
}