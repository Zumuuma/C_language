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

int main(void)
{
	int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	rev_intary(array, 10);

	printf("�z��array�̗v�f�̕��т𔽓]�������ʂ�");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("�ł��B");

	return 0;
}